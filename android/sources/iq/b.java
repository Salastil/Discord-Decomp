package iq;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.ByteArrayInputStream;
import java.io.IOException;

/* loaded from: classes3.dex */
public abstract class b implements v {
    static {
        int i5 = g.f12208b;
    }

    public final a b(ByteArrayInputStream byteArrayInputStream, g gVar) {
        a aVar;
        try {
            int read = byteArrayInputStream.read();
            if (read == -1) {
                aVar = null;
            } else {
                if ((read & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                    read &= 127;
                    int i5 = 7;
                    while (true) {
                        if (i5 >= 32) {
                            while (i5 < 64) {
                                int read2 = byteArrayInputStream.read();
                                if (read2 == -1) {
                                    throw q.a();
                                }
                                if ((read2 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                                    i5 += 7;
                                }
                            }
                            throw new q("CodedInputStream encountered a malformed varint.");
                        }
                        int read3 = byteArrayInputStream.read();
                        if (read3 == -1) {
                            throw q.a();
                        }
                        read |= (read3 & 127) << i5;
                        if ((read3 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
                            break;
                        }
                        i5 += 7;
                    }
                }
                e eVar = new e(new ij.a(byteArrayInputStream, read, 1));
                a aVar2 = (a) a(eVar, gVar);
                try {
                    eVar.a(0);
                    aVar = aVar2;
                } catch (q e9) {
                    e9.f12236d = aVar2;
                    throw e9;
                }
            }
            if (aVar == null || aVar.b()) {
                return aVar;
            }
            q qVar = new q(new ai.k().getMessage());
            qVar.f12236d = aVar;
            throw qVar;
        } catch (IOException e10) {
            throw new q(e10.getMessage());
        }
    }
}
