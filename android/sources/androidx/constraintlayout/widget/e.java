package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.Log;
import android.util.Xml;
import android.view.LayoutInflater;
import android.view.ViewGroup;

/* loaded from: classes.dex */
public final class e {
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f1336b;

    /* renamed from: c, reason: collision with root package name */
    public final float f1337c;

    /* renamed from: d, reason: collision with root package name */
    public final float f1338d;

    /* renamed from: e, reason: collision with root package name */
    public final int f1339e;

    /* renamed from: f, reason: collision with root package name */
    public final ConstraintSet f1340f;

    public e(Context context, XmlResourceParser xmlResourceParser) {
        this.a = Float.NaN;
        this.f1336b = Float.NaN;
        this.f1337c = Float.NaN;
        this.f1338d = Float.NaN;
        this.f1339e = -1;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(Xml.asAttributeSet(xmlResourceParser), m.j);
        int indexCount = obtainStyledAttributes.getIndexCount();
        for (int i5 = 0; i5 < indexCount; i5++) {
            int index = obtainStyledAttributes.getIndex(i5);
            if (index == 0) {
                int resourceId = obtainStyledAttributes.getResourceId(index, this.f1339e);
                this.f1339e = resourceId;
                String resourceTypeName = context.getResources().getResourceTypeName(resourceId);
                context.getResources().getResourceName(resourceId);
                if ("layout".equals(resourceTypeName)) {
                    ConstraintSet constraintSet = new ConstraintSet();
                    this.f1340f = constraintSet;
                    constraintSet.c((ConstraintLayout) LayoutInflater.from(context).inflate(resourceId, (ViewGroup) null));
                }
            } else if (index == 1) {
                this.f1338d = obtainStyledAttributes.getDimension(index, this.f1338d);
            } else if (index == 2) {
                this.f1336b = obtainStyledAttributes.getDimension(index, this.f1336b);
            } else if (index == 3) {
                this.f1337c = obtainStyledAttributes.getDimension(index, this.f1337c);
            } else if (index == 4) {
                this.a = obtainStyledAttributes.getDimension(index, this.a);
            } else {
                Log.v("ConstraintLayoutStates", "Unknown tag");
            }
        }
        obtainStyledAttributes.recycle();
    }

    public final boolean a(float f2, float f10) {
        float f11 = this.a;
        if (!Float.isNaN(f11) && f2 < f11) {
            return false;
        }
        float f12 = this.f1336b;
        if (!Float.isNaN(f12) && f10 < f12) {
            return false;
        }
        float f13 = this.f1337c;
        if (!Float.isNaN(f13) && f2 > f13) {
            return false;
        }
        float f14 = this.f1338d;
        return Float.isNaN(f14) || f10 <= f14;
    }
}
