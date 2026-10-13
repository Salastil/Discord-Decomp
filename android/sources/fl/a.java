package fl;

import android.animation.ValueAnimator;
import android.view.MotionEvent;
import androidx.appcompat.widget.j0;
import com.otaliastudios.zoom.ScaledPoint;
import com.otaliastudios.zoom.ZoomEngine;
import com.otaliastudios.zoom.ZoomLogger;
import gl.c;
import gl.d;
import il.b;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import kotlin.jvm.internal.Intrinsics;
import nf.e;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: c, reason: collision with root package name */
    public static final ZoomLogger f8777c;
    public final j0 a;

    /* renamed from: b, reason: collision with root package name */
    public int f8778b;

    static {
        String tag = a.class.getSimpleName();
        Intrinsics.checkNotNullExpressionValue(tag, "TAG");
        Intrinsics.checkNotNullParameter(tag, "tag");
        f8777c = new ZoomLogger(tag);
    }

    public a(j0 callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.a = callback;
    }

    public static String c(int i5) {
        return i5 != 0 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? "" : "FLINGING" : "ANIMATING" : "PINCHING" : "SCROLLING" : "IDLE";
    }

    public final int a(MotionEvent event) {
        int actionMasked;
        ZoomEngine zoomEngine = (ZoomEngine) this.a.f1016e;
        ZoomLogger zoomLogger = f8777c;
        zoomLogger.c("processTouchEvent:", "start.");
        if (this.f8778b == 3) {
            return 2;
        }
        Intrinsics.checkNotNullParameter(event, "event");
        c cVar = zoomEngine.k;
        cVar.getClass();
        Intrinsics.checkNotNullParameter(event, "event");
        boolean onTouchEvent = cVar.f9357e.onTouchEvent(event);
        zoomLogger.c("processTouchEvent:", "scaleResult:", Boolean.valueOf(onTouchEvent));
        if (this.f8778b != 2) {
            Intrinsics.checkNotNullParameter(event, "event");
            d dVar = zoomEngine.j;
            dVar.getClass();
            Intrinsics.checkNotNullParameter(event, "event");
            onTouchEvent |= dVar.f9363v.onTouchEvent(event);
            zoomLogger.c("processTouchEvent:", "flingResult:", Boolean.valueOf(onTouchEvent));
        }
        int i5 = 1;
        if (this.f8778b == 1 && ((actionMasked = event.getActionMasked()) == 1 || actionMasked == 3)) {
            zoomLogger.a("processTouchEvent:", "up event while scrolling, dispatching endScrollGesture.");
            d dVar2 = zoomEngine.j;
            b bVar = dVar2.f9360d;
            if (bVar.f10952v || bVar.f10953w) {
                ScaledPoint C0 = bVar.C0();
                if (C0.a != 0.0f || C0.f6619b != 0.0f) {
                    hl.b bVar2 = dVar2.f9362i;
                    el.c update = new el.c(C0, i5);
                    Intrinsics.checkNotNullParameter(update, "update");
                    int i6 = hl.d.k;
                    bVar2.a(e.w(update));
                }
            }
            dVar2.f9361e.b(0);
        }
        if (onTouchEvent && this.f8778b != 0) {
            zoomLogger.c("processTouchEvent:", "returning: TOUCH_STEAL");
            return 2;
        }
        if (onTouchEvent) {
            zoomLogger.c("processTouchEvent:", "returning: TOUCH_LISTEN");
            return 1;
        }
        zoomLogger.c("processTouchEvent:", "returning: TOUCH_NO");
        b(0);
        return 0;
    }

    public final boolean b(int i5) {
        Object[] objArr = {"trySetState:", c(i5)};
        ZoomLogger zoomLogger = f8777c;
        zoomLogger.c(objArr);
        ZoomEngine zoomEngine = (ZoomEngine) this.a.f1016e;
        if (!zoomEngine.f6628i.f10089h) {
            return false;
        }
        int i6 = this.f8778b;
        if (i5 == i6 && i5 != 3) {
            return true;
        }
        if (i5 == 0) {
            io.sentry.internal.debugmeta.c cVar = zoomEngine.f6624e;
            Iterator it = ((ArrayList) cVar.f11623i).iterator();
            while (it.hasNext()) {
                ((el.d) it.next()).onIdle((ZoomEngine) cVar.f11622e);
            }
        } else if (i5 != 1) {
            if (i5 != 2) {
                if (i5 == 4 && i6 == 3) {
                    return false;
                }
            } else if (i6 == 3) {
                return false;
            }
        } else if (i6 == 2 || i6 == 3) {
            return false;
        }
        if (i6 == 3) {
            LinkedHashSet linkedHashSet = zoomEngine.f6628i.f10094o;
            Iterator it2 = linkedHashSet.iterator();
            while (it2.hasNext()) {
                ((ValueAnimator) it2.next()).cancel();
            }
            linkedHashSet.clear();
        } else if (i6 == 4) {
            zoomEngine.j.f9364w.forceFinished(true);
        }
        zoomLogger.a("setState:", c(i5));
        this.f8778b = i5;
        return true;
    }
}
