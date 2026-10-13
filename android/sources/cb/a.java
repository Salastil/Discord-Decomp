package cb;

import com.discord.jank_stats.JankSessionRecorder;
import com.facebook.react.modules.appearance.AppearanceModule;
import com.facebook.react.runtime.ReactHostImpl;
import com.reactnativecommunity.webview.RNCWebViewModule;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3364d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f3365e;

    public /* synthetic */ a(String str, int i5) {
        this.f3364d = i5;
        this.f3365e = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f3364d) {
            case 0:
                AppearanceModule.setColorScheme$lambda$1(this.f3365e);
                break;
            case 1:
                JankSessionRecorder.hydrateLaunchId$lambda$22(this.f3365e);
                break;
            case 2:
                ReactHostImpl.setEmulatedMedia$lambda$9(this.f3365e);
                break;
            default:
                RNCWebViewModule.lambda$releaseWebView$0(this.f3365e);
                break;
        }
    }
}
