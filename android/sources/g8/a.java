package g8;

import android.window.SplashScreen;
import android.window.SplashScreenView;
import com.discord.theme.utils.ActivityThemeUtils;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements SplashScreen.OnExitAnimationListener {
    @Override // android.window.SplashScreen.OnExitAnimationListener
    public final void onSplashScreenExit(SplashScreenView splashScreenView) {
        ActivityThemeUtils.disableSplashScreenExitAnimation$lambda$0(splashScreenView);
    }
}
