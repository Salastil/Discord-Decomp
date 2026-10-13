package net.time4j.tz.model;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import net.time4j.n1;
import net.time4j.r0;
import net.time4j.w0;

/* loaded from: classes3.dex */
public final class h extends g {
    private static final long serialVersionUID = -946839310332554772L;

    /* renamed from: x, reason: collision with root package name */
    public final transient byte f15367x;

    public h(r0 r0Var, n1 n1Var, int i5, l lVar, int i6) {
        super(r0Var, i5, lVar, i6);
        this.f15367x = (byte) n1Var.a();
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(122, this);
    }

    @Override // net.time4j.tz.model.d
    public final int a() {
        return 122;
    }

    @Override // net.time4j.tz.model.g
    public final w0 b(int i5) {
        byte b10 = this.f15366w;
        int l6 = tn.g.l(i5, b10);
        int k = tn.g.k(i5, b10, l6) - this.f15367x;
        if (k < 0) {
            k += 7;
        }
        return w0.z(i5, b10, l6 - k, true);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof h) {
            h hVar = (h) obj;
            if (this.f15367x == hVar.f15367x && c(hVar)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15366w * 37) + (this.f15367x * 17);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        sb2.append("LastDayOfWeekPattern:[month=");
        sb2.append((int) this.f15366w);
        sb2.append(",day-of-week=");
        sb2.append(n1.d(this.f15367x));
        sb2.append(",day-overflow=");
        sb2.append(this.f15361d);
        sb2.append(",time-of-day=");
        sb2.append(this.f15362e);
        sb2.append(",offset-indicator=");
        sb2.append(this.f15363i);
        sb2.append(",dst-offset=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f15364v, ']');
    }
}
