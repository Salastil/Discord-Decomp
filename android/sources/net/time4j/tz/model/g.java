package net.time4j.tz.model;

import java.io.Serializable;
import net.time4j.r0;
import net.time4j.w0;

/* loaded from: classes3.dex */
public abstract class g extends d implements Serializable {
    private static final long serialVersionUID = 1;

    /* renamed from: w, reason: collision with root package name */
    public final transient byte f15366w;

    public g(r0 r0Var, int i5, l lVar, int i6) {
        super(i5, lVar, i6);
        this.f15366w = (byte) r0Var.a();
    }

    public abstract w0 b(int i5);

    public final boolean c(g gVar) {
        return this.f15362e.equals(gVar.f15362e) && this.f15361d == gVar.f15361d && this.f15363i == gVar.f15363i && this.f15364v == gVar.f15364v && this.f15366w == gVar.f15366w;
    }
}
