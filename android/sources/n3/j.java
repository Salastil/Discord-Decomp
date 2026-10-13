package n3;

import android.graphics.Matrix;
import android.graphics.Paint;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class j extends k {
    public final Matrix a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f14800b;

    /* renamed from: c, reason: collision with root package name */
    public float f14801c;

    /* renamed from: d, reason: collision with root package name */
    public float f14802d;

    /* renamed from: e, reason: collision with root package name */
    public float f14803e;

    /* renamed from: f, reason: collision with root package name */
    public float f14804f;

    /* renamed from: g, reason: collision with root package name */
    public float f14805g;

    /* renamed from: h, reason: collision with root package name */
    public float f14806h;

    /* renamed from: i, reason: collision with root package name */
    public float f14807i;
    public final Matrix j;
    public String k;

    public j() {
        this.a = new Matrix();
        this.f14800b = new ArrayList();
        this.f14801c = 0.0f;
        this.f14802d = 0.0f;
        this.f14803e = 0.0f;
        this.f14804f = 1.0f;
        this.f14805g = 1.0f;
        this.f14806h = 0.0f;
        this.f14807i = 0.0f;
        this.j = new Matrix();
        this.k = null;
    }

    @Override // n3.k
    public final boolean a() {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f14800b;
            if (i5 >= arrayList.size()) {
                return false;
            }
            if (((k) arrayList.get(i5)).a()) {
                return true;
            }
            i5++;
        }
    }

    @Override // n3.k
    public final boolean b(int[] iArr) {
        int i5 = 0;
        boolean z5 = false;
        while (true) {
            ArrayList arrayList = this.f14800b;
            if (i5 >= arrayList.size()) {
                return z5;
            }
            z5 |= ((k) arrayList.get(i5)).b(iArr);
            i5++;
        }
    }

    public final void c() {
        Matrix matrix = this.j;
        matrix.reset();
        matrix.postTranslate(-this.f14802d, -this.f14803e);
        matrix.postScale(this.f14804f, this.f14805g);
        matrix.postRotate(this.f14801c, 0.0f, 0.0f);
        matrix.postTranslate(this.f14806h + this.f14802d, this.f14807i + this.f14803e);
    }

    public String getGroupName() {
        return this.k;
    }

    public Matrix getLocalMatrix() {
        return this.j;
    }

    public float getPivotX() {
        return this.f14802d;
    }

    public float getPivotY() {
        return this.f14803e;
    }

    public float getRotation() {
        return this.f14801c;
    }

    public float getScaleX() {
        return this.f14804f;
    }

    public float getScaleY() {
        return this.f14805g;
    }

    public float getTranslateX() {
        return this.f14806h;
    }

    public float getTranslateY() {
        return this.f14807i;
    }

    public void setPivotX(float f2) {
        if (f2 != this.f14802d) {
            this.f14802d = f2;
            c();
        }
    }

    public void setPivotY(float f2) {
        if (f2 != this.f14803e) {
            this.f14803e = f2;
            c();
        }
    }

    public void setRotation(float f2) {
        if (f2 != this.f14801c) {
            this.f14801c = f2;
            c();
        }
    }

    public void setScaleX(float f2) {
        if (f2 != this.f14804f) {
            this.f14804f = f2;
            c();
        }
    }

    public void setScaleY(float f2) {
        if (f2 != this.f14805g) {
            this.f14805g = f2;
            c();
        }
    }

    public void setTranslateX(float f2) {
        if (f2 != this.f14806h) {
            this.f14806h = f2;
            c();
        }
    }

    public void setTranslateY(float f2) {
        if (f2 != this.f14807i) {
            this.f14807i = f2;
            c();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public j(j jVar, s.e eVar) {
        h hVar;
        this.a = new Matrix();
        this.f14800b = new ArrayList();
        this.f14801c = 0.0f;
        this.f14802d = 0.0f;
        this.f14803e = 0.0f;
        this.f14804f = 1.0f;
        this.f14805g = 1.0f;
        this.f14806h = 0.0f;
        this.f14807i = 0.0f;
        Matrix matrix = new Matrix();
        this.j = matrix;
        this.k = null;
        this.f14801c = jVar.f14801c;
        this.f14802d = jVar.f14802d;
        this.f14803e = jVar.f14803e;
        this.f14804f = jVar.f14804f;
        this.f14805g = jVar.f14805g;
        this.f14806h = jVar.f14806h;
        this.f14807i = jVar.f14807i;
        String str = jVar.k;
        this.k = str;
        if (str != null) {
            eVar.put(str, this);
        }
        matrix.set(jVar.j);
        ArrayList arrayList = jVar.f14800b;
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            Object obj = arrayList.get(i5);
            if (obj instanceof j) {
                this.f14800b.add(new j((j) obj, eVar));
            } else {
                if (obj instanceof i) {
                    i iVar = (i) obj;
                    i iVar2 = new i(iVar);
                    iVar2.f14792e = 0.0f;
                    iVar2.f14794g = 1.0f;
                    iVar2.f14795h = 1.0f;
                    iVar2.f14796i = 0.0f;
                    iVar2.j = 1.0f;
                    iVar2.k = 0.0f;
                    iVar2.f14797l = Paint.Cap.BUTT;
                    iVar2.f14798m = Paint.Join.MITER;
                    iVar2.f14799n = 4.0f;
                    iVar2.f14791d = iVar.f14791d;
                    iVar2.f14792e = iVar.f14792e;
                    iVar2.f14794g = iVar.f14794g;
                    iVar2.f14793f = iVar.f14793f;
                    iVar2.f14809c = iVar.f14809c;
                    iVar2.f14795h = iVar.f14795h;
                    iVar2.f14796i = iVar.f14796i;
                    iVar2.j = iVar.j;
                    iVar2.k = iVar.k;
                    iVar2.f14797l = iVar.f14797l;
                    iVar2.f14798m = iVar.f14798m;
                    iVar2.f14799n = iVar.f14799n;
                    hVar = iVar2;
                } else if (obj instanceof h) {
                    hVar = new h((h) obj);
                } else {
                    throw new IllegalStateException("Unknown object in the tree!");
                }
                this.f14800b.add(hVar);
                Object obj2 = hVar.f14808b;
                if (obj2 != null) {
                    eVar.put(obj2, hVar);
                }
            }
        }
    }
}
