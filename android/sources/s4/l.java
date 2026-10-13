package s4;

import android.graphics.PointF;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes.dex */
public final class l {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public PointF f17788b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f17789c;

    public l(PointF pointF, boolean z5, List list) {
        this.f17788b = pointF;
        this.f17789c = z5;
        this.a = new ArrayList(list);
    }

    public final void a(float f2, float f10) {
        if (this.f17788b == null) {
            this.f17788b = new PointF();
        }
        this.f17788b.set(f2, f10);
    }

    public final String toString() {
        return "ShapeData{numCurves=" + this.a.size() + "closed=" + this.f17789c + '}';
    }

    public l() {
        this.a = new ArrayList();
    }
}
