package androidx.appcompat.widget;

import android.view.ViewGroup;

/* loaded from: classes.dex */
public final class s3 extends ViewGroup.MarginLayoutParams {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f1103b;

    public s3(int i5, Object obj) {
        super(-2, i5);
        this.a = 8388627;
    }

    public s3(s3 s3Var) {
        super((ViewGroup.MarginLayoutParams) s3Var);
        this.a = 0;
        this.a = s3Var.a;
    }

    public s3(ViewGroup.LayoutParams layoutParams) {
        super(layoutParams);
        this.a = 0;
    }

    public s3(int i5) {
        this(i5, (Object) null);
        this.f1103b = 0;
        this.a = 8388627;
    }

    public s3(int i5, int i6) {
        this(-2, (Object) null);
        this.f1103b = 0;
        this.a = i5;
    }
}
