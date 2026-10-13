package net.time4j.tz.model;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import net.time4j.r0;
import net.time4j.w0;

/* loaded from: classes3.dex */
public final class f extends g {
    private static final long serialVersionUID = 3957240859230862745L;

    /* renamed from: x, reason: collision with root package name */
    public final transient byte f15365x;

    public f(r0 r0Var, int i5, int i6, l lVar, int i10) {
        super(r0Var, i6, lVar, i10);
        tn.g.c(2000, r0Var.a(), i5);
        this.f15365x = (byte) i5;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(120, this);
    }

    @Override // net.time4j.tz.model.d
    public final int a() {
        return 120;
    }

    @Override // net.time4j.tz.model.g
    public final w0 b(int i5) {
        return w0.z(i5, this.f15366w, this.f15365x, true);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof f) {
            f fVar = (f) obj;
            if (this.f15365x == fVar.f15365x && c(fVar)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15366w * 37) + this.f15365x;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        sb2.append("FixedDayPattern:[month=");
        sb2.append((int) this.f15366w);
        sb2.append(",day-of-month=");
        sb2.append((int) this.f15365x);
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
