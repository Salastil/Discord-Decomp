package i7;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.SystemClock;
import android.util.Base64;
import androidx.core.app.FrameMetricsAggregator;
import com.discord.notifications.service.utils.FCMTokenHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.swmansion.gesturehandler.react.RNGestureHandlerButtonViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerDetectorViewManager;
import com.swmansion.gesturehandler.react.RNGestureHandlerRootViewManager;
import ei.j;
import ic.w;
import id.g;
import io.sentry.IScope;
import io.sentry.android.core.c1;
import io.sentry.android.core.k0;
import io.sentry.android.replay.capture.SessionCaptureStrategy;
import io.sentry.b4;
import io.sentry.e4;
import io.sentry.g6;
import io.sentry.l;
import io.sentry.n3;
import io.sentry.q1;
import io.sentry.r3;
import io.sentry.transport.f;
import io.sentry.util.d;
import io.sentry.util.n;
import io.sentry.v5;
import java.util.Collections;
import java.util.Timer;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicLong;
import javax.inject.Provider;
import jg.c;
import ke.k;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements c, k, j, g, Provider, q1, d, n3, f, b4, r3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10463d;

    public /* synthetic */ a(int i5) {
        this.f10463d = i5;
    }

    @Override // io.sentry.n3
    public void a(g6 g6Var) {
    }

    @Override // io.sentry.util.d
    public Object b() {
        switch (this.f10463d) {
            case 9:
                return v5.empty();
            case 10:
                return v5.empty();
            case 12:
                return new e4();
            case 13:
                byte[] bArr = new byte[8];
                io.sentry.util.j.a().b(bArr);
                byte b10 = (byte) (bArr[6] & 15);
                bArr[6] = b10;
                bArr[6] = (byte) (b10 | 64);
                long j = 0;
                for (int i5 = 0; i5 < 8; i5++) {
                    j = (j << 8) | (bArr[i5] & 255);
                }
                char[] cArr = new char[16];
                n.a(cArr, j);
                return new String(cArr);
            case 15:
                return new FrameMetricsAggregator();
            case 22:
                return new Timer(true);
            case 27:
                ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
                for (io.sentry.clientreport.d dVar : io.sentry.clientreport.d.values()) {
                    for (l lVar : l.values()) {
                        concurrentHashMap.put(new io.sentry.clientreport.c(dVar.getReason(), lVar.getCategory()), new AtomicLong(0L));
                    }
                }
                return Collections.unmodifiableMap(concurrentHashMap);
            default:
                return nt.a.q();
        }
    }

    @Override // io.sentry.b4
    public void c(v5 v5Var) {
        io.sentry.util.a aVar = c1.f11106b;
    }

    @Override // ke.k
    public void d(Object obj, ke.g gVar) {
    }

    @Override // io.sentry.q1
    public Object e() {
        return null;
    }

    @Override // id.g
    public boolean f(int i5, int i6, int i10, int i11, int i12) {
        return false;
    }

    @Override // io.sentry.transport.f
    public long g() {
        return SystemClock.uptimeMillis();
    }

    @Override // ei.j
    public Object get() {
        switch (this.f10463d) {
            case 2:
                byte[] bArr = new byte[12];
                w.f10557i.nextBytes(bArr);
                return Base64.encodeToString(bArr, 10);
            case 3:
            case 4:
            default:
                return new RNGestureHandlerDetectorViewManager();
            case 5:
                return new RNGestureHandlerRootViewManager();
            case 6:
                return new RNGestureHandlerButtonViewManager();
        }
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        switch (this.f10463d) {
            case 26:
                SessionCaptureStrategy.stop$lambda$1(iScope);
                break;
            default:
                iScope.E();
                break;
        }
    }

    public Object i(Context context) {
        String string;
        switch (this.f10463d) {
            case 17:
                return k0.b(context);
            case 18:
                try {
                    return context.getPackageManager().getPackageInfo(context.getPackageName(), 0);
                } catch (Throwable unused) {
                    return null;
                }
            case 19:
                try {
                    ApplicationInfo applicationInfo = context.getApplicationInfo();
                    int i5 = applicationInfo.labelRes;
                    if (i5 == 0) {
                        CharSequence charSequence = applicationInfo.nonLocalizedLabel;
                        string = charSequence != null ? charSequence.toString() : context.getPackageManager().getApplicationLabel(applicationInfo).toString();
                    } else {
                        string = context.getString(i5);
                    }
                    return string;
                } catch (Throwable unused2) {
                    return null;
                }
            case 20:
                return k0.a(context);
            default:
                try {
                    return context.getPackageManager().getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                } catch (Throwable unused3) {
                    return null;
                }
        }
    }

    @Override // jg.c
    public void onFailure(Exception exc) {
        FCMTokenHelper.getToken$lambda$0(exc);
    }
}
