package bs;

import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final class j0 extends x0 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f3200c;

    /* renamed from: d, reason: collision with root package name */
    public final i0 f3201d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j0(KSerializer kSerializer, KSerializer vSerializer, int i5) {
        super(kSerializer, vSerializer);
        this.f3200c = i5;
        switch (i5) {
            case 1:
                Intrinsics.checkNotNullParameter(kSerializer, "kSerializer");
                Intrinsics.checkNotNullParameter(vSerializer, "vSerializer");
                super(kSerializer, vSerializer);
                SerialDescriptor keyDesc = kSerializer.getDescriptor();
                SerialDescriptor valueDesc = vSerializer.getDescriptor();
                Intrinsics.checkNotNullParameter(keyDesc, "keyDesc");
                Intrinsics.checkNotNullParameter(valueDesc, "valueDesc");
                this.f3201d = new i0("kotlin.collections.LinkedHashMap", keyDesc, valueDesc);
                break;
            default:
                Intrinsics.checkNotNullParameter(kSerializer, "kSerializer");
                Intrinsics.checkNotNullParameter(vSerializer, "vSerializer");
                SerialDescriptor keyDesc2 = kSerializer.getDescriptor();
                SerialDescriptor valueDesc2 = vSerializer.getDescriptor();
                Intrinsics.checkNotNullParameter(keyDesc2, "keyDesc");
                Intrinsics.checkNotNullParameter(valueDesc2, "valueDesc");
                this.f3201d = new i0("kotlin.collections.HashMap", keyDesc2, valueDesc2);
                break;
        }
    }

    @Override // bs.a
    public final Object a() {
        switch (this.f3200c) {
            case 0:
                return new HashMap();
            default:
                return new LinkedHashMap();
        }
    }

    @Override // bs.a
    public final int b(Object obj) {
        int size;
        switch (this.f3200c) {
            case 0:
                HashMap hashMap = (HashMap) obj;
                Intrinsics.checkNotNullParameter(hashMap, "<this>");
                size = hashMap.size();
                break;
            default:
                LinkedHashMap linkedHashMap = (LinkedHashMap) obj;
                Intrinsics.checkNotNullParameter(linkedHashMap, "<this>");
                size = linkedHashMap.size();
                break;
        }
        return size * 2;
    }

    @Override // bs.a
    public final void c(int i5, Object obj) {
        switch (this.f3200c) {
            case 0:
                Intrinsics.checkNotNullParameter((HashMap) obj, "<this>");
                break;
            default:
                Intrinsics.checkNotNullParameter((LinkedHashMap) obj, "<this>");
                break;
        }
    }

    @Override // bs.a
    public final Iterator d(Object obj) {
        switch (this.f3200c) {
            case 0:
                Map map = (Map) obj;
                Intrinsics.checkNotNullParameter(map, "<this>");
                return map.entrySet().iterator();
            default:
                Map map2 = (Map) obj;
                Intrinsics.checkNotNullParameter(map2, "<this>");
                return map2.entrySet().iterator();
        }
    }

    @Override // bs.a
    public final int e(Object obj) {
        switch (this.f3200c) {
            case 0:
                Map map = (Map) obj;
                Intrinsics.checkNotNullParameter(map, "<this>");
                return map.size();
            default:
                Map map2 = (Map) obj;
                Intrinsics.checkNotNullParameter(map2, "<this>");
                return map2.size();
        }
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        switch (this.f3200c) {
        }
        return this.f3201d;
    }

    @Override // bs.a
    public final Object i(Object obj) {
        switch (this.f3200c) {
            case 0:
                Intrinsics.checkNotNullParameter(null, "<this>");
                return new HashMap((Map) null);
            default:
                Intrinsics.checkNotNullParameter(null, "<this>");
                return new LinkedHashMap((Map) null);
        }
    }

    @Override // bs.a
    public final Object j(Object obj) {
        switch (this.f3200c) {
            case 0:
                HashMap hashMap = (HashMap) obj;
                Intrinsics.checkNotNullParameter(hashMap, "<this>");
                return hashMap;
            default:
                LinkedHashMap linkedHashMap = (LinkedHashMap) obj;
                Intrinsics.checkNotNullParameter(linkedHashMap, "<this>");
                return linkedHashMap;
        }
    }
}
