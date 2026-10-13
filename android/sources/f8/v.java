package f8;

import android.content.res.Resources;
import com.discord.theme.LightTheme;
import com.discord.theme.OnyxTheme;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class v implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8456d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Resources f8457e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Resources.Theme f8458i;

    public /* synthetic */ v(Resources resources, int i5, Resources.Theme theme) {
        this.f8456d = i5;
        this.f8457e = resources;
        this.f8458i = theme;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        int switchBorderDefault_delegate$lambda$171;
        switch (this.f8456d) {
            case 0:
                switchBorderDefault_delegate$lambda$171 = LightTheme.switchBorderDefault_delegate$lambda$171(this.f8457e, this.f8458i);
                break;
            case 1:
                switchBorderDefault_delegate$lambda$171 = LightTheme.inputBorderActive_delegate$lambda$106(this.f8457e, this.f8458i);
                break;
            case 2:
                switchBorderDefault_delegate$lambda$171 = LightTheme.switchBorderSelectedDefault_delegate$lambda$172(this.f8457e, this.f8458i);
                break;
            case 3:
                switchBorderDefault_delegate$lambda$171 = LightTheme.switchThumbBackgroundDefault_delegate$lambda$173(this.f8457e, this.f8458i);
                break;
            case 4:
                switchBorderDefault_delegate$lambda$171 = LightTheme.switchThumbBackgroundSelectedDefault_delegate$lambda$174(this.f8457e, this.f8458i);
                break;
            case 5:
                switchBorderDefault_delegate$lambda$171 = LightTheme.switchThumbIconActive_delegate$lambda$175(this.f8457e, this.f8458i);
                break;
            case 6:
                switchBorderDefault_delegate$lambda$171 = LightTheme.switchThumbIconDefault_delegate$lambda$176(this.f8457e, this.f8458i);
                break;
            case 7:
                switchBorderDefault_delegate$lambda$171 = LightTheme.tabBarBackground_delegate$lambda$177(this.f8457e, this.f8458i);
                break;
            case 8:
                switchBorderDefault_delegate$lambda$171 = LightTheme.tabLabelTextDefault_delegate$lambda$178(this.f8457e, this.f8458i);
                break;
            case 9:
                switchBorderDefault_delegate$lambda$171 = LightTheme.tabLabelTextFocused_delegate$lambda$179(this.f8457e, this.f8458i);
                break;
            case 10:
                switchBorderDefault_delegate$lambda$171 = LightTheme.backgroundSurfaceHighest_delegate$lambda$17(this.f8457e, this.f8458i);
                break;
            case 11:
                switchBorderDefault_delegate$lambda$171 = LightTheme.tablerowBackgroundDefault_delegate$lambda$180(this.f8457e, this.f8458i);
                break;
            case 12:
                switchBorderDefault_delegate$lambda$171 = LightTheme.inputBorderDefault_delegate$lambda$107(this.f8457e, this.f8458i);
                break;
            case 13:
                switchBorderDefault_delegate$lambda$171 = LightTheme.tablerowBackgroundPressed_delegate$lambda$181(this.f8457e, this.f8458i);
                break;
            case 14:
                switchBorderDefault_delegate$lambda$171 = LightTheme.tablerowIconColorDefault_delegate$lambda$182(this.f8457e, this.f8458i);
                break;
            case 15:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textBrand_delegate$lambda$183(this.f8457e, this.f8458i);
                break;
            case 16:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textCode_delegate$lambda$184(this.f8457e, this.f8458i);
                break;
            case 17:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textCodeAddition_delegate$lambda$185(this.f8457e, this.f8458i);
                break;
            case 18:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textCodeBuiltin_delegate$lambda$186(this.f8457e, this.f8458i);
                break;
            case 19:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textCodeComment_delegate$lambda$187(this.f8457e, this.f8458i);
                break;
            case 20:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textCodeDeletion_delegate$lambda$188(this.f8457e, this.f8458i);
                break;
            case 21:
                switchBorderDefault_delegate$lambda$171 = LightTheme.textCodeKeyword_delegate$lambda$189(this.f8457e, this.f8458i);
                break;
            case 22:
                switchBorderDefault_delegate$lambda$171 = LightTheme.backgroundVoiceMuted_delegate$lambda$18(this.f8457e, this.f8458i);
                break;
            case 23:
                switchBorderDefault_delegate$lambda$171 = LightTheme.inputBorderErrorDefault_delegate$lambda$108(this.f8457e, this.f8458i);
                break;
            case 24:
                switchBorderDefault_delegate$lambda$171 = OnyxTheme.activityTimebarProgressBackground_delegate$lambda$0(this.f8457e, this.f8458i);
                break;
            case 25:
                switchBorderDefault_delegate$lambda$171 = OnyxTheme.textCodeProperty_delegate$lambda$190(this.f8457e, this.f8458i);
                break;
            case 26:
                switchBorderDefault_delegate$lambda$171 = OnyxTheme.textCodeString_delegate$lambda$191(this.f8457e, this.f8458i);
                break;
            case 27:
                switchBorderDefault_delegate$lambda$171 = OnyxTheme.textCodeTitle_delegate$lambda$192(this.f8457e, this.f8458i);
                break;
            case 28:
                switchBorderDefault_delegate$lambda$171 = OnyxTheme.textCodeType_delegate$lambda$193(this.f8457e, this.f8458i);
                break;
            default:
                switchBorderDefault_delegate$lambda$171 = OnyxTheme.textDefault_delegate$lambda$194(this.f8457e, this.f8458i);
                break;
        }
        return Integer.valueOf(switchBorderDefault_delegate$lambda$171);
    }
}
