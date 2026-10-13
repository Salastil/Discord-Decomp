package bn;

import java.util.Map;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f3076d = new m(v0.d(), v0.d(), v0.d());
    public final Map a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f3077b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f3078c;

    public m(Map itemGroupMap, Map groupSingleSelection, Map groupMemberItems) {
        Intrinsics.checkNotNullParameter(itemGroupMap, "itemGroupMap");
        Intrinsics.checkNotNullParameter(groupSingleSelection, "groupSingleSelection");
        Intrinsics.checkNotNullParameter(groupMemberItems, "groupMemberItems");
        this.a = itemGroupMap;
        this.f3077b = groupSingleSelection;
        this.f3078c = groupMemberItems;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof m)) {
            return false;
        }
        m mVar = (m) obj;
        return Intrinsics.areEqual(this.a, mVar.a) && Intrinsics.areEqual(this.f3077b, mVar.f3077b) && Intrinsics.areEqual(this.f3078c, mVar.f3078c);
    }

    public final int hashCode() {
        return this.f3078c.hashCode() + ((this.f3077b.hashCode() + (this.a.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return "StackHeaderToolbarMenuGroupMetadata(itemGroupMap=" + this.a + ", groupSingleSelection=" + this.f3077b + ", groupMemberItems=" + this.f3078c + ")";
    }
}
