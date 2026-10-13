package kotlinx.serialization.encoding;

import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public interface Encoder {
    CompositeEncoder E(SerialDescriptor serialDescriptor, int i5);

    void H(SerialDescriptor serialDescriptor, int i5);

    void K(int i5);

    Encoder L(SerialDescriptor serialDescriptor);

    void M(KSerializer kSerializer, Object obj);

    void O(long j);

    void Q(String str);

    void a();

    CompositeEncoder beginStructure(SerialDescriptor serialDescriptor);

    void e(double d6);

    void f(short s2);

    SerializersModule getSerializersModule();

    void j(byte b10);

    void k(boolean z5);

    void o(float f2);

    void u(char c6);

    void w();
}
