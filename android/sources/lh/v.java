package lh;

import android.graphics.Matrix;
import android.graphics.Path;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class v {
    public float a;

    /* renamed from: b, reason: collision with root package name */
    public float f14041b;

    /* renamed from: c, reason: collision with root package name */
    public float f14042c;

    /* renamed from: d, reason: collision with root package name */
    public float f14043d;

    /* renamed from: e, reason: collision with root package name */
    public float f14044e;

    /* renamed from: f, reason: collision with root package name */
    public Object f14045f = new ArrayList();

    /* renamed from: g, reason: collision with root package name */
    public Object f14046g = new ArrayList();

    public v() {
        d(0.0f, 270.0f, 0.0f);
    }

    public void a(float f2) {
        float f10 = this.f14043d;
        if (f10 == f2) {
            return;
        }
        float f11 = ((f2 - f10) + 360.0f) % 360.0f;
        if (f11 > 180.0f) {
            return;
        }
        float f12 = this.f14041b;
        float f13 = this.f14042c;
        r rVar = new r(f12, f13, f12, f13);
        rVar.f14036f = this.f14043d;
        rVar.f14037g = f11;
        ((ArrayList) this.f14046g).add(new p(rVar));
        this.f14043d = f2;
    }

    public void b(Matrix matrix, Path path) {
        ArrayList arrayList = (ArrayList) this.f14045f;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((t) arrayList.get(i5)).a(matrix, path);
        }
    }

    public void c(float f2, float f10) {
        s sVar = new s();
        sVar.f14038b = f2;
        sVar.f14039c = f10;
        ((ArrayList) this.f14045f).add(sVar);
        q qVar = new q(sVar, this.f14041b, this.f14042c);
        float b10 = qVar.b() + 270.0f;
        float b11 = qVar.b() + 270.0f;
        a(b10);
        ((ArrayList) this.f14046g).add(qVar);
        this.f14043d = b11;
        this.f14041b = f2;
        this.f14042c = f10;
    }

    public void d(float f2, float f10, float f11) {
        this.a = f2;
        this.f14041b = 0.0f;
        this.f14042c = f2;
        this.f14043d = f10;
        this.f14044e = (f10 + f11) % 360.0f;
        ((ArrayList) this.f14045f).clear();
        ((ArrayList) this.f14046g).clear();
    }
}
