package xe;

import a5.d0;
import a5.g0;
import a5.t;
import android.content.Context;
import android.util.Log;
import android.view.ViewGroup;
import androidx.core.util.Consumer;
import com.facebook.react.runtime.r;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.google.android.gms.internal.play_billing.s;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeoutException;
import jg.l;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k {

    /* renamed from: e, reason: collision with root package name */
    public static k f20419e;
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f20420b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f20421c;

    /* renamed from: d, reason: collision with root package name */
    public Object f20422d;

    public k(d0 d0Var, int i5, Consumer consumer, Runnable runnable) {
        this.a = i5;
        this.f20420b = consumer;
        this.f20421c = runnable;
        this.f20422d = d0Var;
    }

    public static synchronized k b(Context context) {
        k kVar;
        synchronized (k.class) {
            try {
                if (f20419e == null) {
                    f20419e = new k(context, Executors.unconfigurableScheduledExecutorService(Executors.newScheduledThreadPool(1, new t("MessengerIpcClient", 1))));
                }
                kVar = f20419e;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return kVar;
    }

    public void a(Throwable th2) {
        d0 d0Var = (d0) this.f20422d;
        if (th2 instanceof TimeoutException) {
            d0Var.O(102, 28, g0.f172r);
            s.i("BillingClientTesting", "Asynchronous call to Billing Override Service timed out.", th2);
        } else {
            d0Var.O(95, 28, g0.f172r);
            s.i("BillingClientTesting", "An error occurred while retrieving billing override.", th2);
        }
        ((Runnable) this.f20421c).run();
    }

    public synchronized l c(j jVar) {
        try {
            if (Log.isLoggable("MessengerIpcClient", 3)) {
                Log.d("MessengerIpcClient", "Queueing ".concat(jVar.toString()));
            }
            if (!((i) this.f20422d).d(jVar)) {
                i iVar = new i(this);
                this.f20422d = iVar;
                iVar.d(jVar);
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return jVar.f20415b.a;
    }

    public k(Context context, ScheduledExecutorService scheduledExecutorService) {
        this.f20422d = new i(this);
        this.a = 1;
        this.f20421c = scheduledExecutorService;
        this.f20420b = context.getApplicationContext();
    }

    public k(r4.a aVar, r4.a aVar2, r4.a aVar3, int i5) {
        this.f20420b = aVar;
        this.f20421c = aVar2;
        this.f20422d = aVar3;
        this.a = i5;
    }

    public k(ViewGroup view, bm.d eventPropagationView, ThemedReactContext themedReactContext) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(eventPropagationView, "eventPropagationView");
        this.f20420b = view;
        this.f20421c = eventPropagationView;
        this.f20422d = themedReactContext;
        this.a = UIManagerHelper.getSurfaceId(view);
        new r(17, this);
        new com.discord.chat.presentation.message.view.d(this);
    }
}
