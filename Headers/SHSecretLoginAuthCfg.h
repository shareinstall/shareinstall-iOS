//
//  SHSecretLoginAuthCfg.h
//  ShareInstallSDK
//
//  Created by 路鹏 on 2019/7/31.
//  Copyright © 2019 路鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SHSecretLoginAuthCfg : NSObject
/**4、导航栏颜色*/
@property (nonatomic,strong) UIColor *navColor;
/**6、导航栏标题*/
@property (nonatomic,strong) NSString *navText;
/**7、导航返回图标(尺寸根据图片大小)*/
@property (nonatomic,strong) UIImage *navReturnImg;


/**10、LOGO图片*/
@property (nonatomic,strong) UIImage *logoImg;
/**11、LOGO图片宽度*/
@property (nonatomic,assign) CGFloat logoWidth;
/**12、LOGO图片高度*/
@property (nonatomic,assign) CGFloat logoHeight;
/**13、LOGO图片偏移量*/
@property (nonatomic,assign) CGFloat logoOffsetY;

/**19、手机号码字体颜色*/
@property (nonatomic,strong) UIColor *numberColor;
/**20、手机号码字体大小*/
@property (nonatomic,assign) CGFloat numberSize;
/**24、号码栏Y偏移量*/
@property (nonatomic,assign) CGFloat numFieldOffsetY;

/**15、登录按钮文本*/
@property (nonatomic,strong) NSString *logBtnText;
/**16、登录按钮Y偏移量*/
@property (nonatomic,assign) CGFloat logBtnOffsetY;
/**17、登录按钮文本颜色*/
@property (nonatomic,strong) UIColor *logBtnTextColor;
/**18、登录按钮背景图片
 */
@property (nonatomic,strong) UIImage *logBtnImg;


/**21、隐藏切换账号按钮*/
@property (nonatomic,assign) BOOL swithAccHidden;
/**22、切换账号字体颜色*/
@property (nonatomic,strong) UIColor *swithAccTextColor;
/**23、设置切换账号相对于标题栏下边缘y偏移*/
@property (nonatomic,assign) CGFloat switchOffsetY;


#pragma mark 隐私条款
/**25、复选框未选中时图片*/
@property (nonatomic,strong) UIImage *uncheckedImg;
/**26、复选框选中时图片*/
@property (nonatomic,strong) UIImage *checkedImg;
/**31、隐私条款check框默认状态 默认:NO */
@property (nonatomic,assign) BOOL privacyState;
/**隐私条款字体颜色*/
@property (nonatomic,strong) UIColor *privacyTextColor;
/**隐私条款协议字体颜色*/
@property (nonatomic,strong) UIColor *privateArticleColor;
/**隐私条款自定义协议文字*/
@property (nonatomic,strong) NSString *customArticleText;
/**隐私条款自定义协议url*/
@property (nonatomic,strong) NSString *customArticleUrl;
/**应用名称*/
@property (nonatomic,strong) NSString *appName;
@end

