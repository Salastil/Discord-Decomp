package androidx.fragment.app;

import android.view.View;
import android.view.ViewGroup;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1983d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1984e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f1985i;

    public /* synthetic */ d(int i5, Object obj, Object obj2) {
        this.f1983d = i5;
        this.f1984e = obj;
        this.f1985i = obj2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1983d) {
            case 0:
                t this$0 = (t) this.f1984e;
                y1 operation = (y1) this.f1985i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(operation, "$operation");
                this$0.a(operation);
                break;
            default:
                q this$02 = (q) this.f1984e;
                ViewGroup container = (ViewGroup) this.f1985i;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                Intrinsics.checkNotNullParameter(container, "$container");
                Iterator it = this$02.f2073c.iterator();
                while (it.hasNext()) {
                    y1 y1Var = ((r) it.next()).a;
                    View view = y1Var.f2125c.getView();
                    if (view != null) {
                        y1Var.a.a(view, container);
                    }
                }
                break;
        }
    }
}
