package kotlinx.serialization.encoding;

import bs.l1;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public interface CompositeEncoder {
    void C(l1 l1Var, int i5, byte b10);

    boolean I(SerialDescriptor serialDescriptor, int i5);

    void J(l1 l1Var, int i5, char c6);

    void N(SerialDescriptor serialDescriptor, int i5, double d6);

    void P(SerialDescriptor serialDescriptor, int i5, long j);

    void endStructure(SerialDescriptor serialDescriptor);

    void g(SerialDescriptor serialDescriptor, int i5, KSerializer kSerializer, Object obj);

    void l(SerialDescriptor serialDescriptor, int i5, float f2);

    void n(int i5, int i6, SerialDescriptor serialDescriptor);

    void r(l1 l1Var, int i5, short s2);

    Encoder t(l1 l1Var, int i5);

    void x(SerialDescriptor serialDescriptor, int i5, boolean z5);

    void y(SerialDescriptor serialDescriptor, int i5, String str);

    void z(SerialDescriptor serialDescriptor, int i5, KSerializer kSerializer, Object obj);
}
