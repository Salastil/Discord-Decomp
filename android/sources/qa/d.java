package qa;

import com.facebook.react.devsupport.CxxInspectorPackagerConnection;

/* loaded from: classes3.dex */
public abstract class d {
    public static final int a;

    /* renamed from: b, reason: collision with root package name */
    public static final int f16700b;

    /* renamed from: c, reason: collision with root package name */
    public static volatile c f16701c;

    static {
        int min = (int) Math.min(Runtime.getRuntime().maxMemory(), 2147483647L);
        a = ((long) min) > CxxInspectorPackagerConnection.MAX_QUEUE_SIZE ? (min / 4) * 3 : min / 2;
        f16700b = 384;
    }
}
