package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class DefaultItemAnimator$ChangeInfo {
    public RecyclerView.ViewHolder a;

    /* renamed from: b, reason: collision with root package name */
    public RecyclerView.ViewHolder f2267b;

    /* renamed from: c, reason: collision with root package name */
    public int f2268c;

    /* renamed from: d, reason: collision with root package name */
    public int f2269d;

    /* renamed from: e, reason: collision with root package name */
    public int f2270e;

    /* renamed from: f, reason: collision with root package name */
    public int f2271f;

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ChangeInfo{oldHolder=");
        sb2.append(this.a);
        sb2.append(", newHolder=");
        sb2.append(this.f2267b);
        sb2.append(", fromX=");
        sb2.append(this.f2268c);
        sb2.append(", fromY=");
        sb2.append(this.f2269d);
        sb2.append(", toX=");
        sb2.append(this.f2270e);
        sb2.append(", toY=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f2271f, '}');
    }
}
