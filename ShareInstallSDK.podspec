Pod::Spec.new do |s|
s.name                  = "ShareInstallSDK"
s.version               = '1.2.2'
s.summary               = "shareinstall iOS SDK"
s.description           = <<-DESC
    shareinstall iOS SDK for pod
DESC

s.homepage              = "http://shareinstall.com/"
s.license               = 'MIT'
s.author                = { "tivon" => "shareinstall@021.com"}
s.source                = { :git => "https://github.com/shareinstall/shareinstall-iOS.git", :tag => s.version.to_s }

s.vendored_libraries = 'libShareInstallSDK.a'
s.source_files = 'Headers/*.h'
s.libraries = 'z.1.2.8','c++.1'
s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }

s.platform              = :ios, '8.0'

end