package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.util.SparseIntArray;

/* loaded from: classes.dex */
public final class i {
    public static final SparseIntArray j;
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f1391b;

    /* renamed from: c, reason: collision with root package name */
    public int f1392c;

    /* renamed from: d, reason: collision with root package name */
    public float f1393d;

    /* renamed from: e, reason: collision with root package name */
    public float f1394e;

    /* renamed from: f, reason: collision with root package name */
    public float f1395f;

    /* renamed from: g, reason: collision with root package name */
    public int f1396g;

    /* renamed from: h, reason: collision with root package name */
    public String f1397h;

    /* renamed from: i, reason: collision with root package name */
    public int f1398i;

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        j = sparseIntArray;
        sparseIntArray.append(3, 1);
        sparseIntArray.append(5, 2);
        sparseIntArray.append(9, 3);
        sparseIntArray.append(2, 4);
        sparseIntArray.append(1, 5);
        sparseIntArray.append(0, 6);
        sparseIntArray.append(4, 7);
        sparseIntArray.append(8, 8);
        sparseIntArray.append(7, 9);
        sparseIntArray.append(6, 10);
    }

    public final void a(Context context, AttributeSet attributeSet) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, m.f1417f);
        int indexCount = obtainStyledAttributes.getIndexCount();
        for (int i5 = 0; i5 < indexCount; i5++) {
            int index = obtainStyledAttributes.getIndex(i5);
            switch (j.get(index)) {
                case 1:
                    this.f1394e = obtainStyledAttributes.getFloat(index, this.f1394e);
                    break;
                case 2:
                    this.f1392c = obtainStyledAttributes.getInt(index, this.f1392c);
                    break;
                case 3:
                    if (obtainStyledAttributes.peekValue(index).type == 3) {
                        obtainStyledAttributes.getString(index);
                        break;
                    } else {
                        String str = q0.a.a[obtainStyledAttributes.getInteger(index, 0)];
                        break;
                    }
                case 4:
                    obtainStyledAttributes.getInt(index, 0);
                    break;
                case 5:
                    this.a = ConstraintSet.h(obtainStyledAttributes, index, this.a);
                    break;
                case 6:
                    this.f1391b = obtainStyledAttributes.getInteger(index, this.f1391b);
                    break;
                case 7:
                    this.f1393d = obtainStyledAttributes.getFloat(index, this.f1393d);
                    break;
                case 8:
                    this.f1396g = obtainStyledAttributes.getInteger(index, this.f1396g);
                    break;
                case 9:
                    this.f1395f = obtainStyledAttributes.getFloat(index, this.f1395f);
                    break;
                case 10:
                    int i6 = obtainStyledAttributes.peekValue(index).type;
                    if (i6 == 1) {
                        this.f1398i = obtainStyledAttributes.getResourceId(index, -1);
                        break;
                    } else if (i6 == 3) {
                        String string = obtainStyledAttributes.getString(index);
                        this.f1397h = string;
                        if (string.indexOf("/") > 0) {
                            this.f1398i = obtainStyledAttributes.getResourceId(index, -1);
                            break;
                        } else {
                            break;
                        }
                    } else {
                        obtainStyledAttributes.getInteger(index, this.f1398i);
                        break;
                    }
            }
        }
        obtainStyledAttributes.recycle();
    }
}
