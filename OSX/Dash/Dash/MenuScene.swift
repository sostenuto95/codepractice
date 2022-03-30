//
//  MenuScene.swift
//  Dash
//
//  Created by Jeremy Leung on 3/30/22.
//

import Foundation
import SpriteKit

class MenuScene: SKScene{
    var startGame = SKLabelNode()
    var scoreLabel = SKLabelNode()
    var gameSettings = Settings.sharedInstance

    override func didMove(to view: SKView) {
        self.anchorPoint = CGPoint(x: 0.5, y: 0.5)
        startGame = self.childNode(withName: "startGame") as! SKLabelNode
        scoreLabel = self.childNode(withName: "scoreLabel") as! SKLabelNode
        scoreLabel.text = "Score: 0"
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        for touch in touches{
        let touchLocation = touch.location(in: self)
        if atPoint(touchLocation).name == "startGame"{
            let gameScene = SKScene(fileNamed: "GameScene")!
            gameScene.scaleMode = .aspectFill
            view?.presentScene(gameScene, transition: SKTransition.push(with: SKTransitionDirection.down, duration: 2))
            }
        }
    }
}
