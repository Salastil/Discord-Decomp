package androidx.appcompat.app;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.widget.ListView;

/* loaded from: classes.dex */
public class AlertController$RecycleListView extends ListView {

    /* renamed from: d, reason: collision with root package name */
    public final int f758d;

    /* renamed from: e, reason: collision with root package name */
    public final int f759e;

    public AlertController$RecycleListView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.f9462t);
        this.f759e = obtainStyledAttributes.getDimensionPixelOffset(0, -1);
        this.f758d = obtainStyledAttributes.getDimensionPixelOffset(1, -1);
    }
}
