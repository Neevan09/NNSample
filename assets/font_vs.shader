DXBCґњgўr'ЁэМБ'b0~   E     8   №  L  ј  d     RDEFЬ     l      <    ю€  t  RD11<          (   $          \                             FrameConstants Ђ\      Д   ∞          d      @       x      €€€€    €€€€    Ь  @   @       x      €€€€    €€€€    §  А   @       x      €€€€    €€€€    ѓ  ј   @       x      €€€€    €€€€    Ї            ћ      €€€€    €€€€    р          ћ      €€€€    €€€€    ы            ћ      €€€€    €€€€      0         ћ      €€€€    €€€€      @         ћ      €€€€    €€€€       P         ћ      €€€€    €€€€    /  `         ћ      €€€€    €€€€    A  p  4      P      €€€€    €€€€    matView float4x4 ЂЂЂ                            l  matProj matViewInv matProjInv cameraPos float4 Ђ                            ƒ  bufferSize leftTopRay rightTopRay leftBottomRay rightBottomRay perspectiveParams padding3 float      $                       J  Microsoft (R) HLSL Shader Compiler 10.1 ISGNh         P                    Y                   _                   POSITION COLOR TEXCOORD OSGNl         P                    \                    b                   SV_POSITION COLOR TEXCOORD ЂSHEXЬ  P  g   jИ Y  FО         _  r     _  т    _  2    g  т         e  т     e  2     h     6  r      F     8  2     FА         @     ?   ?          2      F      F     6  "       АA       +  В      @     6        
      6  "            6  B      *      6  т     F    6  2     F    6  т      F     6  т     F    6  2     F     >  STATФ                                                                          	                                                                      SPDB >  Microsoft C/C++ MSF 7.00
DS            Ш                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  ј€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€8  р€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€€       <       €€€€                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         Ф.1"јеZ   3Р,Щ™<NЫФќ5\еы!                          №Q3                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
};

struct VSInput
{
	float3 position : POSITION;
	float4 color	: COLOR;
	float2 texcoord : TEXCOORD0;
};

struct VSOutput
{
	float4 position : SV_POSITION;
	float4 color : COLOR;
	float2 texcoord : TEXCOORD0;
};

VSOutput main(VSInput input)
{
	VSOutput output;

	float3 pos = input.position;
	pos.xy /= (bufferSize.xy * 0.5);
	pos.y = - pos.y;

	output.position = float4(pos, 1);
	output.color = input.color;
	output.texcoord = input.texcoord;

	return output;
}
       G   H  Lи ∆Z  uГ <b Ћ†   
О І- ў* &k  йр 9ќ                                                                                                                                                                                                                                                                                                                                                                                                                                                                                cbuffer FrameConstants : register (b0)
{
	float4x4				matView;
	float4x4				matProj;
	float4x4				matViewInv;
	float4x4				matProjInv;
	float4					cameraPos;
	float4					bufferSize;
	float4					leftTopRay;
	float4					rightTopRay;
	float4					leftBottomRay;
	float4					rightBottomRay;
	float4					perspectiveParams;
	float					padding3[4 * 9];
};

struct VSInput
{
	float3 position : POSITION;
	float4 color	: COLOR;
	float2 texcoord : TEXCOORD0;
};

struct VSOutput
{
	float4 position : SV_POSITION;
	float4 color : COLOR;
	float2 texcoord : TEXCOORD0;
};

VSOutput main(VSInput input)
{
	VSOutput output;

	float3 pos = input.position;
	pos.xy /= (bufferSize.xy * 0.5);
	pos.y = - pos.y;

	output.position = float4(pos, 1);
	output.color = input.color;
	output.texcoord = input.texcoord;

	return output;
}
                                                                                                                                                                          юпюп   е   C:\Users\Naveen\Desktop\Nitish\CodeBlank\NNSample\engine\font_vs.hlsl  c:\users\naveen\desktop\nitish\codeblank\nnsample\engine\font_vs.hlsl cbuffer FrameConstants : register (b0)
{
	float4x4				matView;
	float4x4				matProj;
	float4x4				matViewInv;
	float4x4				matProjInv;
	float4					cameraPos;
	float4					bufferSize;
	float4					leftTopRay;
	float4					rightTopRay;
	float4					leftBottomRay;
	float4					rightBottomRay;
	float4					perspectiveParams;
	float					padding3[4 * 9];в0А   °eыЄя”                                                               H   (   в0§О_>V     G   H                                                                                                                                                                                                                                                                                                                                                                                                                  B <   
  [ Ђ?
  [ Ђ?Microsoft (R) HLSL Shader Compiler 10.1   6 =hlslFlags 0x5 hlslTarget vs_5_0 hlslEntry main     *     t      ,      ,  	  p    †main . >  	 input                                  P     p    ,     P    p    ,    P    p    ,    P    p    ,    P    p    ,    P    p    ,    P    p    ,    P    p    ,     P     p    ,$   : >  И <main return value>                                P     p    ,     P  $  p    ,$    P    p    ,    P    p    ,    P    p    ,    P    p    ,    P     p    ,     P    p    ,    P    p    ,    P    p    ,   . >   output                                 P     ш    §     P         Р      P         |     P     4   h     P     H   T     P     H   T     P     H   T     P     H   T     P      \   @      P   $  \   @ $   * >    pos                                P      Д         P     Д        P     Д         ф         hF3њЈ+i–р*Уc–W  т   h        Ь         \  p   #  Аp   #   Д   $  АД   $   ∞   $  А∞   $   ћ   %  Аћ   %   д   '  Ад   '   ш   '  Аш   '     '  А  '      '  А   '   4  (  А4  (   H  )  АH  )   \  +  А\  +   p  +  Аp  +   Д  +  АД  +   Ш  +  АШ  +     	   !    !      
   "  !  "  !  "  !  "  !      "  !                 ц                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     18        @  
 €€   €€     0   0      8        @       float3 утс @       float4 утс @       float2 утс:       position с    color     texcoord с              $ VSInput тс
      :      position с    color      texcoord с              ( VSOutput с
            
     
 
                                                                                                                                             18              €€   €€                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  О                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             D3DSHDR Ь                             `                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        €€€€	/с                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                %    А    main   Q     €€€€€€bufferSize                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         €€€€	/с                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            €€€€w	1    
М іЬ  L       ,   T                                    Ь     `             	 x      Ь     ш|њ        main none   -Ї.с       Ь     `                    €€€€    Ь        €€€€    €€€€         C:\Users\Naveen\Desktop\Nitish\CodeBlank\NNSample\engine\font_vs.hlsl   юпюп                  €€€€€€€€€€ €€€€€€€€€€                                                                                                                                                                     Ф.1"јеZ   3Р,Щ™<NЫФќ5\еы!s   /LinkInfo /names /src/headerblock /src/files/c:\users\naveen\desktop\nitish\codeblank\nnsample\engine\font_vs.hlsl          :             
             "          №Q3                                                                                                                                                                                                                                                                                                                        ѕ   x  [  8         А   V     8       (   ,  ,   4                  
               	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        