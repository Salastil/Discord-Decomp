package f4;

import android.media.MediaCodec;
import android.media.MediaCodecInfo;
import androidx.work.impl.WorkDatabase;
import io.sentry.i0;
import java.net.InetAddress;
import java.util.concurrent.Callable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8341d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f8342e;

    public /* synthetic */ e(int i5, Object obj) {
        this.f8341d = i5;
        this.f8342e = obj;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        switch (this.f8341d) {
            case 0:
                u4.b this$0 = (u4.b) this.f8342e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                WorkDatabase workDatabase = (WorkDatabase) this$0.f18810e;
                Long r5 = workDatabase.l().r("next_alarm_manager_id");
                int longValue = r5 != null ? (int) r5.longValue() : 0;
                workDatabase.l().u(new e4.d("next_alarm_manager_id", Long.valueOf(longValue != Integer.MAX_VALUE ? longValue + 1 : 0)));
                return Integer.valueOf(longValue);
            case 1:
                ha.b this$02 = (ha.b) this.f8342e;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                try {
                    this$02.f9598g.O();
                    ((k8.g) this$02.a).a();
                    return null;
                } catch (Throwable th2) {
                    Intrinsics.checkNotNullParameter(th2, "th");
                    throw th2;
                }
            case 2:
                i0 i0Var = (i0) this.f8342e;
                try {
                    i0Var.f11607e.getClass();
                    i0Var.f11604b = InetAddress.getLocalHost().getCanonicalHostName();
                    i0Var.f11605c = System.currentTimeMillis() + i0Var.a;
                    i0Var.f11606d.set(false);
                    return null;
                } catch (Throwable th3) {
                    i0Var.f11606d.set(false);
                    throw th3;
                }
            default:
                return MediaCodec.createByCodecName(((MediaCodecInfo) this.f8342e).getName());
        }
    }
}
