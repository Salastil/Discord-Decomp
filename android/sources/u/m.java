package u;

import android.os.Parcel;
import android.os.Parcelable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m implements Parcelable.ClassLoaderCreator {
    public static n a(Parcel parcel, ClassLoader classLoader) {
        i iVar;
        if (classLoader == null) {
            classLoader = m.class.getClassLoader();
        }
        Object readValue = parcel.readValue(classLoader);
        int readInt = parcel.readInt();
        if (readInt == 0) {
            iVar = i.f18758i;
            Intrinsics.checkNotNull(iVar, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.neverEqualPolicy>");
        } else if (readInt == 1) {
            iVar = i.f18760w;
            Intrinsics.checkNotNull(iVar, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.structuralEqualityPolicy>");
        } else {
            if (readInt != 2) {
                throw new IllegalStateException(s4.h.e(readInt, "Unsupported MutableState policy ", " was restored"));
            }
            iVar = i.f18759v;
            Intrinsics.checkNotNull(iVar, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.referentialEqualityPolicy>");
        }
        return new n(readValue, iVar);
    }

    @Override // android.os.Parcelable.ClassLoaderCreator
    public final /* bridge */ /* synthetic */ Object createFromParcel(Parcel parcel, ClassLoader classLoader) {
        return a(parcel, classLoader);
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        return new n[i5];
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        return a(parcel, null);
    }
}
