package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;

/* loaded from: classes.dex */
public final class j {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f1399b;

    /* renamed from: c, reason: collision with root package name */
    public float f1400c;

    /* renamed from: d, reason: collision with root package name */
    public float f1401d;

    public final void a(Context context, AttributeSet attributeSet) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, m.f1418g);
        int indexCount = obtainStyledAttributes.getIndexCount();
        for (int i5 = 0; i5 < indexCount; i5++) {
            int index = obtainStyledAttributes.getIndex(i5);
            if (index == 1) {
                this.f1400c = obtainStyledAttributes.getFloat(index, this.f1400c);
            } else if (index == 0) {
                int i6 = obtainStyledAttributes.getInt(index, this.a);
                this.a = i6;
                this.a = ConstraintSet.f1315d[i6];
            } else if (index == 4) {
                this.f1399b = obtainStyledAttributes.getInt(index, this.f1399b);
            } else if (index == 3) {
                this.f1401d = obtainStyledAttributes.getFloat(index, this.f1401d);
            }
        }
        obtainStyledAttributes.recycle();
    }
}
