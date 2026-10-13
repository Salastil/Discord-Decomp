package jc;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* loaded from: classes3.dex */
public interface n {
    public static final ByteBuffer a = ByteBuffer.allocateDirect(0).order(ByteOrder.nativeOrder());

    boolean c();

    ByteBuffer d();

    void e(ByteBuffer byteBuffer);

    void f();

    void flush();

    boolean g();

    l h(l lVar);

    void reset();
}
