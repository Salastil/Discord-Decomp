package e5;

import android.content.pm.PackageManager;
import android.os.Build;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.modules.network.CookieJarContainer;
import com.facebook.react.modules.network.ForwardingCookieHandler;
import com.facebook.react.modules.network.OkHttpClientProvider;
import com.google.android.exoplayer2.upstream.DataSource;
import e4.r;
import ie.s;
import java.net.CookieHandler;
import java.util.HashMap;
import java.util.Map;
import ke.d0;
import okhttp3.OkHttpClient;

/* loaded from: classes.dex */
public abstract class b {
    public static DataSource.Factory a;

    /* renamed from: b, reason: collision with root package name */
    public static com.discord.avatar.react.a f8004b;

    /* renamed from: c, reason: collision with root package name */
    public static String f8005c;

    /* JADX WARN: Code restructure failed: missing block: B:4:0x0006, code lost:
    
        r8 = com.discord.media_player.HttpEngineFactoryResolver.init$lambda$0((android.content.Context) r0.f3767b, r8);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static DataSource.Factory a(ReactContext reactContext, s sVar, Map map, String str) {
        String str2;
        DataSource.Factory init$lambda$0;
        if (str != null && (r0 = f8004b) != null && init$lambda$0 != null) {
            return init$lambda$0;
        }
        if (a == null || (map != null && !map.isEmpty())) {
            OkHttpClient okHttpClient = OkHttpClientProvider.getOkHttpClient();
            ((CookieJarContainer) okHttpClient.G).setCookieJar(new ve.i((CookieHandler) new ForwardingCookieHandler(reactContext)));
            if (f8005c == null) {
                int i5 = d0.a;
                try {
                    str2 = reactContext.getPackageManager().getPackageInfo(reactContext.getPackageName(), 0).versionName;
                } catch (PackageManager.NameNotFoundException unused) {
                    str2 = "?";
                }
                f8005c = com.discord.chat.bridge.botuikit.a.j(com.discord.chat.bridge.botuikit.a.m("ReactNativeVideo/", str2, " (Linux;Android "), Build.VERSION.RELEASE, ") ExoPlayerLib/2.19.1");
            }
            pc.b bVar = new pc.b(okHttpClient, f8005c, sVar);
            if (map != null) {
                r rVar = (r) bVar.f3143e;
                synchronized (rVar) {
                    rVar.f8001i = null;
                    ((HashMap) rVar.f8000e).clear();
                    ((HashMap) rVar.f8000e).putAll(map);
                }
            }
            a = new com.google.android.exoplayer2.upstream.a(reactContext, sVar, bVar);
        }
        return a;
    }
}
