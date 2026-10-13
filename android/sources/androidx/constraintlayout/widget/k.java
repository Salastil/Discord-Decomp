package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.util.SparseIntArray;

/* loaded from: classes.dex */
public final class k {

    /* renamed from: n, reason: collision with root package name */
    public static final SparseIntArray f1402n;
    public float a;

    /* renamed from: b, reason: collision with root package name */
    public float f1403b;

    /* renamed from: c, reason: collision with root package name */
    public float f1404c;

    /* renamed from: d, reason: collision with root package name */
    public float f1405d;

    /* renamed from: e, reason: collision with root package name */
    public float f1406e;

    /* renamed from: f, reason: collision with root package name */
    public float f1407f;

    /* renamed from: g, reason: collision with root package name */
    public float f1408g;

    /* renamed from: h, reason: collision with root package name */
    public int f1409h;

    /* renamed from: i, reason: collision with root package name */
    public float f1410i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f1411l;

    /* renamed from: m, reason: collision with root package name */
    public float f1412m;

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        f1402n = sparseIntArray;
        sparseIntArray.append(6, 1);
        sparseIntArray.append(7, 2);
        sparseIntArray.append(8, 3);
        sparseIntArray.append(4, 4);
        sparseIntArray.append(5, 5);
        sparseIntArray.append(0, 6);
        sparseIntArray.append(1, 7);
        sparseIntArray.append(2, 8);
        sparseIntArray.append(3, 9);
        sparseIntArray.append(9, 10);
        sparseIntArray.append(10, 11);
        sparseIntArray.append(11, 12);
    }

    public final void a(Context context, AttributeSet attributeSet) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, m.f1420i);
        int indexCount = obtainStyledAttributes.getIndexCount();
        for (int i5 = 0; i5 < indexCount; i5++) {
            int index = obtainStyledAttributes.getIndex(i5);
            switch (f1402n.get(index)) {
                case 1:
                    this.a = obtainStyledAttributes.getFloat(index, this.a);
                    break;
                case 2:
                    this.f1403b = obtainStyledAttributes.getFloat(index, this.f1403b);
                    break;
                case 3:
                    this.f1404c = obtainStyledAttributes.getFloat(index, this.f1404c);
                    break;
                case 4:
                    this.f1405d = obtainStyledAttributes.getFloat(index, this.f1405d);
                    break;
                case 5:
                    this.f1406e = obtainStyledAttributes.getFloat(index, this.f1406e);
                    break;
                case 6:
                    this.f1407f = obtainStyledAttributes.getDimension(index, this.f1407f);
                    break;
                case 7:
                    this.f1408g = obtainStyledAttributes.getDimension(index, this.f1408g);
                    break;
                case 8:
                    this.f1410i = obtainStyledAttributes.getDimension(index, this.f1410i);
                    break;
                case 9:
                    this.j = obtainStyledAttributes.getDimension(index, this.j);
                    break;
                case 10:
                    this.k = obtainStyledAttributes.getDimension(index, this.k);
                    break;
                case 11:
                    this.f1411l = true;
                    this.f1412m = obtainStyledAttributes.getDimension(index, this.f1412m);
                    break;
                case 12:
                    this.f1409h = ConstraintSet.h(obtainStyledAttributes, index, this.f1409h);
                    break;
            }
        }
        obtainStyledAttributes.recycle();
    }
}
