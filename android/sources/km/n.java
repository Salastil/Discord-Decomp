package km;

import android.content.Context;
import android.util.Log;
import android.view.MotionEvent;
import android.view.ViewParent;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.views.view.ReactViewGroup;
import java.util.ArrayList;
import jm.q;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n extends ReactViewGroup {

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ int f13449w = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f13450d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f13451e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f13452i;

    /* renamed from: v, reason: collision with root package name */
    public m f13453v;

    public final void c(c view) {
        Intrinsics.checkNotNullParameter(view, "view");
        m mVar = this.f13453v;
        if (mVar != null) {
            Intrinsics.checkNotNullParameter(view, "view");
            jm.g gVar = mVar.f13443c;
            if (gVar != null) {
                Intrinsics.checkNotNullParameter(view, "view");
                ArrayList<jm.f> g6 = gVar.f12900b.g(view);
                if (g6 != null) {
                    for (jm.f fVar : g6) {
                        if (fVar instanceof q) {
                            gVar.g(fVar, view);
                            h8.a closure = new h8.a(2, (q) fVar);
                            Intrinsics.checkNotNullParameter(closure, "closure");
                            fVar.k = true;
                            closure.invoke();
                            fVar.k = false;
                        }
                    }
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x0022, code lost:
    
        if (r3.getActionMasked() != 12) goto L14;
     */
    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean dispatchGenericMotionEvent(MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        if (this.f13451e) {
            if (!a.a(ev)) {
                Intrinsics.checkNotNullParameter(ev, "<this>");
                if (ev.getActionMasked() != 11) {
                }
            }
            m mVar = this.f13453v;
            Intrinsics.checkNotNull(mVar);
            if (mVar.a(ev)) {
                return true;
            }
        }
        return super.dispatchGenericMotionEvent(ev);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (this.f13451e && event.getActionMasked() == 0) {
            MotionEvent obtain = MotionEvent.obtain(event);
            obtain.setAction(3);
            super.dispatchTouchEvent(obtain);
            obtain.recycle();
        }
        if (this.f13451e) {
            m mVar = this.f13453v;
            Intrinsics.checkNotNull(mVar);
            if (mVar.a(event)) {
                return true;
            }
        }
        return super.dispatchTouchEvent(event);
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        boolean z5;
        super.onAttachedToWindow();
        if (!this.f13452i) {
            UiThreadUtil.assertOnUiThread();
            for (ViewParent parent = getParent(); parent != null; parent = parent.getParent()) {
                if (parent instanceof n) {
                    z5 = false;
                    break;
                } else {
                    if (parent instanceof RootView) {
                        break;
                    }
                }
            }
        }
        z5 = true;
        this.f13451e = z5;
        if (!z5) {
            Log.i(ReactConstants.TAG, "[GESTURE HANDLER] Gesture handler is already enabled for a parent view");
        }
        if (this.f13451e && this.f13453v == null) {
            Context context = getContext();
            Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
            this.f13453v = new m((ReactContext) context, this, this.f13450d);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void requestDisallowInterceptTouchEvent(boolean z5) {
        l lVar;
        if (this.f13451e) {
            m mVar = this.f13453v;
            Intrinsics.checkNotNull(mVar);
            if (mVar.f13443c != null && !mVar.f13448h && (lVar = mVar.f13444d) != null && lVar.f12878h == 2) {
                lVar.a(false);
                lVar.k();
            }
        }
        super.requestDisallowInterceptTouchEvent(z5);
    }

    public final void setModuleId(int i5) {
        this.f13450d = i5;
    }

    public final void setUnstableForceActive(boolean z5) {
        this.f13452i = z5;
    }
}
