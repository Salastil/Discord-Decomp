package km;

import android.util.SparseArray;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i {
    public final SparseArray a = new SparseArray();

    /* renamed from: b, reason: collision with root package name */
    public final SparseArray f13437b = new SparseArray();

    /* renamed from: c, reason: collision with root package name */
    public final SparseArray f13438c = new SparseArray();

    public static int[] b(ReadableMap readableMap, String str) {
        ReadableArray array = readableMap.getArray(str);
        Intrinsics.checkNotNull(array);
        int size = array.size();
        int[] iArr = new int[size];
        for (int i5 = 0; i5 < size; i5++) {
            iArr[i5] = array.getInt(i5);
        }
        return iArr;
    }

    public final void a(jm.f handler, ReadableMap config) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(config, "config");
        handler.H = this;
        if (config.hasKey("waitFor")) {
            this.a.put(handler.f12874d, b(config, "waitFor"));
        }
        if (config.hasKey("simultaneousHandlers")) {
            this.f13437b.put(handler.f12874d, b(config, "simultaneousHandlers"));
        }
        if (config.hasKey("blocksHandlers")) {
            this.f13438c.put(handler.f12874d, b(config, "blocksHandlers"));
        }
    }
}
