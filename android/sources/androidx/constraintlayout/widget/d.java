package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.Xml;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class d {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f1333b = new ArrayList();

    /* renamed from: c, reason: collision with root package name */
    public final int f1334c;

    /* renamed from: d, reason: collision with root package name */
    public final ConstraintSet f1335d;

    public d(Context context, XmlResourceParser xmlResourceParser) {
        this.f1334c = -1;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(Xml.asAttributeSet(xmlResourceParser), m.f1419h);
        int indexCount = obtainStyledAttributes.getIndexCount();
        for (int i5 = 0; i5 < indexCount; i5++) {
            int index = obtainStyledAttributes.getIndex(i5);
            if (index == 0) {
                this.a = obtainStyledAttributes.getResourceId(index, this.a);
            } else if (index == 1) {
                int resourceId = obtainStyledAttributes.getResourceId(index, this.f1334c);
                this.f1334c = resourceId;
                String resourceTypeName = context.getResources().getResourceTypeName(resourceId);
                context.getResources().getResourceName(resourceId);
                if ("layout".equals(resourceTypeName)) {
                    ConstraintSet constraintSet = new ConstraintSet();
                    this.f1335d = constraintSet;
                    constraintSet.c((ConstraintLayout) LayoutInflater.from(context).inflate(resourceId, (ViewGroup) null));
                }
            }
        }
        obtainStyledAttributes.recycle();
    }
}
