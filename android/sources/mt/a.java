package mt;

import android.util.StatsEvent;
import android.util.StatsLog;

/* loaded from: classes.dex */
public abstract class a {
    public static void a(long j, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15, int i16, int i17, int i18, int i19, int i20) {
        StatsEvent.Builder newBuilder = StatsEvent.newBuilder();
        newBuilder.setAtomId(762);
        newBuilder.writeLong(j);
        newBuilder.writeInt(i5);
        newBuilder.writeInt(i6);
        newBuilder.writeInt(i10);
        newBuilder.writeInt(i11);
        newBuilder.writeInt(i12);
        newBuilder.writeInt(i13);
        newBuilder.writeInt(i14);
        newBuilder.writeInt(i15);
        newBuilder.writeInt(i16);
        newBuilder.writeInt(i17);
        newBuilder.writeInt(i18);
        newBuilder.writeInt(i19);
        newBuilder.writeInt(i20);
        newBuilder.addBooleanAnnotation((byte) 1, true);
        newBuilder.usePooledBuffer();
        StatsLog.write(newBuilder.build());
    }
}
