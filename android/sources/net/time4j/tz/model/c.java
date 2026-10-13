package net.time4j.tz.model;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import net.time4j.n1;
import net.time4j.r0;
import net.time4j.w0;

/* loaded from: classes3.dex */
public final class c extends g {
    private static final long serialVersionUID = -7354650946442523175L;
    public final transient boolean E;

    /* renamed from: x, reason: collision with root package name */
    public final transient byte f15359x;

    /* renamed from: y, reason: collision with root package name */
    public final transient byte f15360y;

    public c(r0 r0Var, int i5, n1 n1Var, int i6, l lVar, int i10, boolean z5) {
        super(r0Var, i6, lVar, i10);
        tn.g.c(2000, r0Var.a(), i5);
        this.f15359x = (byte) i5;
        this.f15360y = (byte) n1Var.a();
        this.E = z5;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(121, this);
    }

    @Override // net.time4j.tz.model.d
    public final int a() {
        return 121;
    }

    @Override // net.time4j.tz.model.g
    public final w0 b(int i5) {
        byte b10 = this.f15366w;
        byte b11 = this.f15359x;
        int k = tn.g.k(i5, b10, b11);
        int i6 = 1;
        w0 z5 = w0.z(i5, b10, b11, true);
        byte b12 = this.f15360y;
        if (k == b12) {
            return z5;
        }
        int i10 = k - b12;
        if (this.E) {
            i10 = -i10;
        } else {
            i6 = -1;
        }
        if (i10 < 0) {
            i10 += 7;
        }
        return (w0) z5.l(i10 * i6, net.time4j.m.E);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof c) {
            c cVar = (c) obj;
            if (this.f15359x == cVar.f15359x && this.f15360y == cVar.f15360y && this.E == cVar.E && c(cVar)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((this.f15366w * 37) + this.f15360y) * 17) + this.f15359x + (this.E ? 1 : 0);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        sb2.append("DayOfWeekInMonthPattern:[month=");
        sb2.append((int) this.f15366w);
        sb2.append(",dayOfMonth=");
        sb2.append((int) this.f15359x);
        sb2.append(",dayOfWeek=");
        sb2.append(n1.d(this.f15360y));
        sb2.append(",day-overflow=");
        sb2.append(this.f15361d);
        sb2.append(",time-of-day=");
        sb2.append(this.f15362e);
        sb2.append(",offset-indicator=");
        sb2.append(this.f15363i);
        sb2.append(",dst-offset=");
        sb2.append(this.f15364v);
        sb2.append(",after=");
        sb2.append(this.E);
        sb2.append(']');
        return sb2.toString();
    }
}
