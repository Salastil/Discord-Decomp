package wi;

import android.content.Context;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import androidx.collection.SparseArrayCompat;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.customview.widget.FocusStrategy$CollectionAdapter;
import com.otaliastudios.zoom.OverPanRangeProvider;
import com.otaliastudios.zoom.ZoomEngine;
import com.reactnativecommunity.webview.p;
import di.o;
import fo.n;
import hc.l;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Response;
import ps.t;
import th.r;

/* loaded from: classes3.dex */
public final class d implements FocusStrategy$CollectionAdapter, p, OverPanRangeProvider, tm.a, uh.g, o, y2.b {

    /* renamed from: e, reason: collision with root package name */
    public static d f19837e;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19838d;

    public /* synthetic */ d(int i5) {
        this.f19838d = i5;
    }

    public static final void h(VelocityTracker velocityTracker, MotionEvent motionEvent) {
        float rawX = motionEvent.getRawX() - motionEvent.getX();
        float rawY = motionEvent.getRawY() - motionEvent.getY();
        motionEvent.offsetLocation(rawX, rawY);
        Intrinsics.checkNotNull(velocityTracker);
        velocityTracker.addMovement(motionEvent);
        motionEvent.offsetLocation(-rawX, -rawY);
    }

    public static final Response i(Response response) {
        if ((response == null ? null : response.f16091y) == null) {
            return response;
        }
        t i5 = response.i();
        i5.f16591g = null;
        return i5.a();
    }

    public static boolean j(String str) {
        return ("Connection".equalsIgnoreCase(str) || "Keep-Alive".equalsIgnoreCase(str) || "Proxy-Authenticate".equalsIgnoreCase(str) || "Proxy-Authorization".equalsIgnoreCase(str) || "TE".equalsIgnoreCase(str) || "Trailers".equalsIgnoreCase(str) || "Transfer-Encoding".equalsIgnoreCase(str) || "Upgrade".equalsIgnoreCase(str)) ? false : true;
    }

    @Override // uh.g
    public Object a() {
        switch (this.f19838d) {
            case 17:
                return new r();
            default:
                return new r8.c(20);
        }
    }

    @Override // com.otaliastudios.zoom.OverPanRangeProvider
    public float b(ZoomEngine engine, boolean z5) {
        float f2;
        Intrinsics.checkNotNullParameter(engine, "engine");
        if (z5) {
            f2 = engine.f6628i.j;
        } else {
            if (z5) {
                throw new n();
            }
            f2 = engine.f6628i.k;
        }
        return f2 * 0.1f;
    }

    @Override // androidx.customview.widget.FocusStrategy$CollectionAdapter
    public AccessibilityNodeInfoCompat c(SparseArrayCompat sparseArrayCompat, int i5) {
        return (AccessibilityNodeInfoCompat) sparseArrayCompat.h(i5);
    }

    @Override // tm.a
    public String d() {
        switch (this.f19838d) {
            case 6:
                break;
            case 12:
                break;
        }
        return "onDidAppear";
    }

    @Override // androidx.customview.widget.FocusStrategy$CollectionAdapter
    public int f(SparseArrayCompat sparseArrayCompat) {
        return sparseArrayCompat.g();
    }

    @Override // tm.a
    public String getEventName() {
        switch (this.f19838d) {
            case 6:
                break;
            case 12:
                break;
        }
        return "topDidAppear";
    }

    public l k(Context context, nf.c cVar) {
        l lVar = new l();
        lVar.a = 0;
        lVar.f9773b = 0;
        lVar.f9774c = 0;
        int b10 = cVar.b(context, true);
        lVar.f9773b = b10;
        if (b10 != 0) {
            lVar.f9774c = 1;
            return lVar;
        }
        int j = cVar.j(context);
        lVar.a = j;
        if (j != 0) {
            lVar.f9774c = -1;
        }
        return lVar;
    }

    public d(di.p pVar, o oVar) {
        this.f19838d = 20;
    }

    @Override // y2.b
    public void e() {
    }

    @Override // y2.b
    public void g(int i5, Object obj) {
    }
}
