package bs;

import kotlinx.serialization.KSerializer;

/* loaded from: classes3.dex */
public interface h0 extends KSerializer {
    KSerializer[] childSerializers();

    KSerializer[] typeParametersSerializers();
}
