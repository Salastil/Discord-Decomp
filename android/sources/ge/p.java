package ge;

import com.google.android.exoplayer2.Format;
import java.util.List;
import nd.z0;

/* loaded from: classes3.dex */
public interface p {
    boolean a(int i5, long j);

    z0 b();

    void c(long j, long j5, long j7, List list, pd.m[] mVarArr);

    int d();

    void disable();

    default boolean e(long j, pd.e eVar, List list) {
        return false;
    }

    void enable();

    Format g(int i5);

    int h(int i5);

    int i(long j, List list);

    int j(Format format);

    int k();

    Format l();

    int length();

    int m();

    boolean n(int i5, long j);

    void o(float f2);

    Object p();

    int s(int i5);

    default void q() {
    }

    default void r() {
    }

    default void f(boolean z5) {
    }
}
