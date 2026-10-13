package wl;

import androidx.core.view.m1;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.bridge.queue.MessageQueueThreadImpl;
import com.facebook.react.common.futures.SimpleSettableFuture;
import com.facebook.react.uimanager.ThemedReactContext;
import java.util.HashSet;
import java.util.concurrent.Callable;
import kotlin.jvm.internal.Intrinsics;
import n1.x;
import w3.j;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19881d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f19882e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f19883i;

    public /* synthetic */ d(int i5, Object obj, Object obj2) {
        this.f19881d = i5;
        this.f19882e = obj;
        this.f19883i = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f19881d) {
            case 0:
                f fVar = (f) this.f19882e;
                m1 m1Var = (m1) this.f19883i;
                double c6 = fVar.c();
                bm.d dVar = fVar.f19885d;
                ThemedReactContext themedReactContext = fVar.f19887i;
                fVar.E = fVar.e();
                fVar.f19891y = c6;
                HashSet hashSet = fVar.K;
                if (!hashSet.contains(m1Var)) {
                    fVar.b();
                    tl.b.b(themedReactContext, "KeyboardController::".concat(!fVar.E ? "keyboardDidHide" : "keyboardDidShow"), fVar.d(c6));
                    tl.b.a(themedReactContext, dVar.getId(), new sl.c(fVar.f19889w, dVar.getId(), sl.c.G, c6, !fVar.E ? 0.0d : 1.0d, fVar.H, fVar.I));
                    fVar.H = 0;
                    int[] iArr = {dVar.getId()};
                    WritableArray createArray = Arguments.createArray();
                    createArray.pushInt(iArr[0]);
                    WritableMap createMap = Arguments.createMap();
                    createMap.putArray("tags", createArray);
                    tl.b.b(themedReactContext, "onUserDrivenAnimationEnded", createMap);
                    break;
                } else {
                    fVar.H = 0;
                    fVar.J = null;
                    hashSet.remove(m1Var);
                    break;
                }
            case 1:
                k8.d this$0 = (k8.d) this.f19882e;
                j token = (j) this.f19883i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(token, "$token");
                ((e4.c) this$0.f13208c).b1(token, 3);
                break;
            case 2:
                ((n1.h) this.f19882e).onResult((x) this.f19883i);
                break;
            default:
                MessageQueueThreadImpl.callOnQueue$lambda$0((SimpleSettableFuture) this.f19882e, (Callable) this.f19883i);
                break;
        }
    }
}
