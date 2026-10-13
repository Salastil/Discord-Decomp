package com.discord.minibsdiff;

import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0000\u001a\u0014\u0010\u0003\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u0005\u001a\u00020\u0006H\u0000\u001a$\u0010\u0003\u001a\u00020\u0006*\u00020\u00022\u0006\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H\u0000\u001a\u0014\u0010\n\u001a\u00020\u000b*\u00020\u00022\u0006\u0010\u0005\u001a\u00020\u0001H\u0000¨\u0006\f"}, d2 = {"readOffset", "", "Ljava/io/InputStream;", "readNBytesCompat", "", "n", "", "b", "off", "len", "skipNBytesCompat", "", "minibsdiff_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class InputStreamUtilsKt {
    @NotNull
    public static final byte[] readNBytesCompat(@NotNull InputStream inputStream, int i5) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        byte[] bArr = new byte[i5];
        int i6 = 0;
        while (i6 < i5) {
            i6 += inputStream.read(bArr, i6, i5 - i6);
        }
        return bArr;
    }

    public static final long readOffset(@NotNull InputStream inputStream) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        long j = ByteBuffer.wrap(readNBytesCompat(inputStream, 8)).order(ByteOrder.LITTLE_ENDIAN).getLong();
        return 0 == (Long.MIN_VALUE & j) ? j : -(j & LongCompanionObject.MAX_VALUE);
    }

    public static final void skipNBytesCompat(@NotNull InputStream inputStream, long j) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        long j5 = 0;
        while (j5 < j) {
            j5 += inputStream.skip(j - j5);
        }
    }

    public static final int readNBytesCompat(@NotNull InputStream inputStream, @NotNull byte[] b10, int i5, int i6) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        Intrinsics.checkNotNullParameter(b10, "b");
        int i10 = 0;
        while (i10 < i6) {
            i10 += inputStream.read(b10, i5 + i10, i6 - i10);
        }
        return i10;
    }
}
