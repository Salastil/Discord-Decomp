package com.discord.minibsdiff;

import c7.a;
import com.facebook.imagepipeline.nativecode.c;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.RandomAccessFile;
import java.util.Arrays;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import kotlin.text.Charsets;
import kr.s;
import org.jetbrains.annotations.NotNull;
import yo.h;
import yo.j;

@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001\u001cB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t2\u0006\u0010\u000b\u001a\u00020\u0007H\u0002J\u001e\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000fJ8\u0010\u0012\u001a\u00020\r2\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u00162\u0006\u0010\u0018\u001a\u00020\u00162\u0006\u0010\u0019\u001a\u00020\u00162\u0006\u0010\u001a\u001a\u00020\u001bH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lcom/discord/minibsdiff/BSDiff;", "", "<init>", "()V", "BSDIFF_CONFIG_MAGIC", "", "BUFFER_SIZE_BYTES", "", "chunkRange", "Lkotlin/sequences/Sequence;", "", "total", "bspatchStreaming", "", "oldPath", "Ljava/io/File;", "patchPath", "newPath", "bspatchStreamingInner", "oldRandomAccessFile", "Ljava/io/RandomAccessFile;", "oldInputStream", "Ljava/io/InputStream;", "ctrlInputStream", "diffInputStream", "extraInputStream", "newOutputStream", "Ljava/io/OutputStream;", "BsPatchError", "minibsdiff_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class BSDiff {

    @NotNull
    private static final byte[] BSDIFF_CONFIG_MAGIC;
    private static final long BUFFER_SIZE_BYTES = 1000000;

    @NotNull
    public static final BSDiff INSTANCE = new BSDiff();

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\u0018\u00002\u00060\u0001j\u0002`\u0002B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lcom/discord/minibsdiff/BSDiff$BsPatchError;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "message", "", "<init>", "(Ljava/lang/String;)V", "minibsdiff_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class BsPatchError extends Exception {
        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public BsPatchError(@NotNull String message) {
            super(message);
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    static {
        byte[] bytes = "MBSDIF43".getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
        BSDIFF_CONFIG_MAGIC = bytes;
    }

    private BSDiff() {
    }

    private final void bspatchStreamingInner(RandomAccessFile oldRandomAccessFile, InputStream oldInputStream, InputStream ctrlInputStream, InputStream diffInputStream, InputStream extraInputStream, OutputStream newOutputStream) {
        byte[] bArr = new byte[1000000];
        byte[] bArr2 = new byte[1000000];
        InputStream inputStream = ctrlInputStream;
        if (!Arrays.equals(InputStreamUtilsKt.readNBytesCompat(inputStream, 8), BSDIFF_CONFIG_MAGIC)) {
            throw new BsPatchError("Bad magic config header for patch file!");
        }
        long readOffset = InputStreamUtilsKt.readOffset(inputStream);
        long readOffset2 = InputStreamUtilsKt.readOffset(inputStream);
        long readOffset3 = InputStreamUtilsKt.readOffset(inputStream);
        long j = 32 + readOffset;
        InputStreamUtilsKt.skipNBytesCompat(diffInputStream, j);
        InputStreamUtilsKt.skipNBytesCompat(extraInputStream, j + readOffset2);
        long j5 = 0;
        while (j5 < readOffset3) {
            long readOffset4 = InputStreamUtilsKt.readOffset(inputStream);
            long readOffset5 = InputStreamUtilsKt.readOffset(inputStream);
            long readOffset6 = InputStreamUtilsKt.readOffset(inputStream);
            if (j5 + readOffset4 + readOffset5 > readOffset3) {
                throw new BsPatchError("Corrupted patch, attempting to make new file that's too big");
            }
            Iterator it = chunkRange(readOffset4).iterator();
            while (true) {
                boolean hasNext = it.hasNext();
                Iterator it2 = it;
                int i5 = 0;
                if (!hasNext) {
                    break;
                }
                int intValue = ((Number) it2.next()).intValue();
                long j7 = j5;
                InputStreamUtilsKt.readNBytesCompat(oldInputStream, bArr, 0, intValue);
                InputStreamUtilsKt.readNBytesCompat(diffInputStream, bArr2, 0, intValue);
                int i6 = 0;
                while (i6 < intValue) {
                    bArr[i6] = (byte) (bArr[i6] + bArr2[i6]);
                    i6++;
                    i5 = 0;
                }
                newOutputStream.write(bArr, i5, intValue);
                it = it2;
                j5 = j7;
            }
            long j10 = j5;
            Iterator it3 = chunkRange(readOffset5).iterator();
            while (it3.hasNext()) {
                int intValue2 = ((Number) it3.next()).intValue();
                InputStreamUtilsKt.readNBytesCompat(extraInputStream, bArr, 0, intValue2);
                newOutputStream.write(bArr, 0, intValue2);
            }
            oldRandomAccessFile.seek(oldRandomAccessFile.getFilePointer() + readOffset6);
            j5 = readOffset4 + readOffset5 + j10;
            inputStream = ctrlInputStream;
        }
        newOutputStream.close();
    }

    private final Sequence<Integer> chunkRange(long total) {
        h hVar;
        if (total <= Long.MIN_VALUE) {
            h.f21004w.getClass();
            hVar = h.f21005x;
        } else {
            hVar = new h(0, total - 1);
        }
        return s.n(CollectionsKt.C(j.h(hVar, BUFFER_SIZE_BYTES)), new a(total, 0));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final int chunkRange$lambda$0(long j, long j5) {
        return (int) Math.min(j - j5, BUFFER_SIZE_BYTES);
    }

    public final void bspatchStreaming(@NotNull File oldPath, @NotNull File patchPath, @NotNull File newPath) {
        Intrinsics.checkNotNullParameter(oldPath, "oldPath");
        Intrinsics.checkNotNullParameter(patchPath, "patchPath");
        Intrinsics.checkNotNullParameter(newPath, "newPath");
        RandomAccessFile randomAccessFile = new RandomAccessFile(oldPath, "r");
        InputStream inputStream = RandomFileAccessInputStreamKt.inputStream(randomAccessFile);
        BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(patchPath), 8192);
        bufferedInputStream = new BufferedInputStream(new FileInputStream(patchPath), 8192);
        bufferedInputStream = new BufferedInputStream(new FileInputStream(patchPath), 8192);
        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(newPath), 8192);
        try {
            try {
                try {
                    try {
                        INSTANCE.bspatchStreamingInner(randomAccessFile, inputStream, bufferedInputStream, bufferedInputStream, bufferedInputStream, bufferedOutputStream);
                        Unit unit = Unit.a;
                        try {
                            bufferedOutputStream.close();
                            bufferedInputStream.close();
                            bufferedInputStream.close();
                            bufferedInputStream.close();
                            c.j(inputStream, null);
                        } finally {
                        }
                    } finally {
                    }
                } finally {
                }
            } finally {
            }
        } finally {
        }
    }
}
