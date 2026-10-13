package u;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class n extends y.g implements Parcelable, l {

    @NotNull
    public static final Parcelable.Creator<n> CREATOR = new m();

    /* renamed from: d, reason: collision with root package name */
    public final v f18762d;

    /* renamed from: e, reason: collision with root package name */
    public u f18763e;

    public n(Object obj, v vVar) {
        new x.a(0);
        this.f18762d = vVar;
        y.c b10 = y.f.b();
        u uVar = new u(b10.e(), obj);
        if (!(b10 instanceof y.a)) {
            uVar.f20589b = new u(1, obj);
        }
        this.f18763e = uVar;
    }

    @Override // y.g
    public final y.h a() {
        return this.f18763e;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // u.x
    public final Object getValue() {
        return ((u) y.f.f(this.f18763e, this)).f18770c;
    }

    @Override // y.g
    public final void h(y.h hVar) {
        Intrinsics.checkNotNull(hVar, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutableStateImpl.StateStateRecord<T of androidx.compose.runtime.SnapshotMutableStateImpl>");
        this.f18763e = (u) hVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // u.l
    public final void setValue(Object obj) {
        y.c b10;
        y.h d6;
        u uVar = (u) y.f.a(this.f18763e);
        if (this.f18762d.a(uVar.f18770c, obj)) {
            return;
        }
        u uVar2 = this.f18763e;
        synchronized (y.f.f20582b) {
            b10 = y.f.b();
            if (b10.d()) {
                b10.h(this);
            }
            long e9 = b10.e();
            if (uVar.a != e9) {
                synchronized (y.f.f20582b) {
                    d6 = y.f.d(uVar2, this);
                }
                d6.a = e9;
                if (uVar.a != 1) {
                    b10.h(this);
                }
                uVar = d6;
            }
            uVar.f18770c = obj;
            Unit unit = Unit.a;
        }
        b10.i(b10.f() + 1);
        Function1 g6 = b10.g();
        if (g6 != null) {
            g6.invoke(this);
        }
    }

    public final String toString() {
        return "MutableState(value=" + ((u) y.f.a(this.f18763e)).f18770c + ")@" + hashCode();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int i6;
        parcel.writeValue(getValue());
        i iVar = i.f18758i;
        Intrinsics.checkNotNull(iVar, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.neverEqualPolicy>");
        v vVar = this.f18762d;
        if (Intrinsics.areEqual(vVar, iVar)) {
            i6 = 0;
        } else {
            i iVar2 = i.f18760w;
            Intrinsics.checkNotNull(iVar2, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.structuralEqualityPolicy>");
            if (Intrinsics.areEqual(vVar, iVar2)) {
                i6 = 1;
            } else {
                i iVar3 = i.f18759v;
                Intrinsics.checkNotNull(iVar3, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.referentialEqualityPolicy>");
                if (!Intrinsics.areEqual(vVar, iVar3)) {
                    throw new IllegalStateException("Only known types of MutableState's SnapshotMutationPolicy are supported");
                }
                i6 = 2;
            }
        }
        parcel.writeInt(i6);
    }
}
