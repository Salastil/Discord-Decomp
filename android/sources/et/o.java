package et;

import java.util.RandomAccess;
import okio.ByteString;

/* loaded from: classes.dex */
public final class o extends kotlin.collections.f implements RandomAccess {

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ int f8260v = 0;

    /* renamed from: e, reason: collision with root package name */
    public final ByteString[] f8261e;

    /* renamed from: i, reason: collision with root package name */
    public final int[] f8262i;

    public o(ByteString[] byteStringArr, int[] iArr) {
        this.f8261e = byteStringArr;
        this.f8262i = iArr;
    }

    @Override // kotlin.collections.a
    public final int a() {
        return this.f8261e.length;
    }

    @Override // kotlin.collections.a, java.util.Collection, java.util.List
    public final /* bridge */ boolean contains(Object obj) {
        if (obj instanceof ByteString) {
            return super.contains((ByteString) obj);
        }
        return false;
    }

    @Override // kotlin.collections.f, java.util.List
    public final Object get(int i5) {
        return this.f8261e[i5];
    }

    @Override // kotlin.collections.f, java.util.List
    public final /* bridge */ int indexOf(Object obj) {
        if (obj instanceof ByteString) {
            return super.indexOf((ByteString) obj);
        }
        return -1;
    }

    @Override // kotlin.collections.f, java.util.List
    public final /* bridge */ int lastIndexOf(Object obj) {
        if (obj instanceof ByteString) {
            return super.lastIndexOf((ByteString) obj);
        }
        return -1;
    }
}
