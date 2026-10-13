package bb;

import android.content.Intent;
import android.content.IntentSender;
import android.os.Bundle;
import android.util.Pair;
import android.view.View;
import android.view.ViewGroup;
import androidx.activity.result.ActivityResultCallback;
import com.discord.bundle_updater.BundleUpdater;
import com.discord.timers.TimersManager;
import com.facebook.react.fabric.mounting.SurfaceMountingManager;
import com.facebook.react.fabric.mounting.ViewTransitionCoordinator;
import com.facebook.react.fabric.mounting.ViewTransitionCoordinator$markViewInTransition$listener$1;
import com.facebook.react.jstasks.HeadlessJsTaskConfig;
import com.facebook.react.jstasks.HeadlessJsTaskContext;
import com.facebook.react.modules.toast.ToastModule;
import e.g;
import f.c;
import hc.f1;
import ic.u;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArraySet;
import ke.j;
import ke.l;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import nc.n;
import nd.s;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2761d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f2762e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f2763i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f2764v;

    public /* synthetic */ a(int i5, BundleUpdater bundleUpdater, Function0 function0) {
        this.f2761d = 1;
        this.f2762e = i5;
        this.f2763i = bundleUpdater;
        this.f2764v = function0;
    }

    /* JADX WARN: Type inference failed for: r2v19, types: [java.lang.Object, nc.o] */
    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2761d) {
            case 0:
                ((HeadlessJsTaskContext) this.f2763i).startTask((HeadlessJsTaskConfig) this.f2764v, this.f2762e);
                break;
            case 1:
                BundleUpdater.checkForUpdate$lambda$11(this.f2762e, (BundleUpdater) this.f2763i, (Function0) this.f2764v);
                break;
            case 2:
                TimersManager.setTimeout$lambda$0((TimersManager) this.f2763i, this.f2762e, (Function0) this.f2764v);
                break;
            case 3:
                SurfaceMountingManager.addViewAtInternal$lambda$9((View) this.f2763i, (ViewGroup) this.f2764v, this.f2762e);
                break;
            case 4:
                ViewTransitionCoordinator$markViewInTransition$listener$1.onViewDetachedFromWindow$lambda$0((ViewTransitionCoordinator) this.f2763i, this.f2762e, (Runnable) this.f2764v);
                break;
            case 5:
                g gVar = (g) this.f2763i;
                Object obj = ((u4.b) this.f2764v).f18810e;
                String str = (String) gVar.a.get(Integer.valueOf(this.f2762e));
                if (str != null) {
                    c cVar = (c) gVar.f755e.get(str);
                    if ((cVar != null ? cVar.a : null) != null) {
                        ActivityResultCallback activityResultCallback = cVar.a;
                        Intrinsics.checkNotNull(activityResultCallback, "null cannot be cast to non-null type androidx.activity.result.ActivityResultCallback<O of androidx.activity.result.ActivityResultRegistry.dispatchResult>");
                        if (gVar.f754d.remove(str)) {
                            activityResultCallback.f(obj);
                            break;
                        }
                    } else {
                        gVar.f757g.remove(str);
                        gVar.f756f.put(str, obj);
                        break;
                    }
                }
                break;
            case 6:
                ((g) this.f2763i).a(this.f2762e, 0, new Intent().setAction("androidx.activity.result.contract.action.INTENT_SENDER_REQUEST").putExtra("androidx.activity.result.contract.extra.SEND_INTENT_EXCEPTION", (IntentSender.SendIntentException) this.f2764v));
                break;
            case 7:
                ToastModule.show$lambda$0((ToastModule) this.f2763i, (String) this.f2764v, this.f2762e);
                break;
            case 8:
                io.sentry.internal.debugmeta.c cVar2 = (io.sentry.internal.debugmeta.c) this.f2763i;
                Pair pair = (Pair) this.f2764v;
                ((u) ((ic.a) ((f1) cVar2.f11623i).f9700i)).A(((Integer) pair.first).intValue(), (s) pair.second, this.f2762e);
                break;
            case 9:
                CopyOnWriteArraySet copyOnWriteArraySet = (CopyOnWriteArraySet) this.f2763i;
                j jVar = (j) this.f2764v;
                Iterator it = copyOnWriteArraySet.iterator();
                while (it.hasNext()) {
                    l lVar = (l) it.next();
                    if (!lVar.f13316d) {
                        int i5 = this.f2762e;
                        if (i5 != -1) {
                            lVar.f13314b.e(i5);
                        }
                        lVar.f13315c = true;
                        jVar.invoke(lVar.a);
                    }
                }
                break;
            case 10:
                n nVar = (n) this.f2763i;
                this.f2764v.A(nVar.a, nVar.f15046b, this.f2762e);
                break;
            case 11:
                ((q.n) this.f2763i).onGreatestScrollPercentageIncreased(this.f2762e, (Bundle) this.f2764v);
                break;
            default:
                ((y2.b) ((jc.j) this.f2763i).f12531c).g(this.f2762e, this.f2764v);
                break;
        }
    }

    public /* synthetic */ a(Object obj, int i5, Object obj2, int i6) {
        this.f2761d = i6;
        this.f2763i = obj;
        this.f2762e = i5;
        this.f2764v = obj2;
    }

    public /* synthetic */ a(Object obj, Object obj2, int i5, int i6) {
        this.f2761d = i6;
        this.f2763i = obj;
        this.f2764v = obj2;
        this.f2762e = i5;
    }
}
