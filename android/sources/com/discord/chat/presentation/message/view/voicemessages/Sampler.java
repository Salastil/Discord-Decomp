package com.discord.chat.presentation.message.view.voicemessages;

import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\b¨\u0006\t"}, d2 = {"Lcom/discord/chat/presentation/message/view/voicemessages/Sampler;", "", "<init>", "()V", "downSample", "", "data", "targetSize", "", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class Sampler {

    @NotNull
    public static final Sampler INSTANCE = new Sampler();

    private Sampler() {
    }

    @NotNull
    public final byte[] downSample(@NotNull byte[] data, int targetSize) {
        Intrinsics.checkNotNullParameter(data, "data");
        if (targetSize == 0) {
            return new byte[0];
        }
        if (data.length == targetSize) {
            return data;
        }
        if (data.length == 0) {
            return new byte[targetSize];
        }
        if (data.length < targetSize) {
            int length = targetSize - data.length;
            byte[] elements = new byte[length];
            Intrinsics.checkNotNullParameter(data, "<this>");
            Intrinsics.checkNotNullParameter(elements, "elements");
            int length2 = data.length;
            byte[] copyOf = Arrays.copyOf(data, length2 + length);
            System.arraycopy(elements, 0, copyOf, length2, length);
            Intrinsics.checkNotNull(copyOf);
            return copyOf;
        }
        float length3 = data.length / targetSize;
        byte[] bArr = new byte[targetSize];
        int i5 = 0;
        int i6 = 0;
        while (i5 < targetSize) {
            int i10 = i5 + 1;
            int rint = (int) Math.rint(i10 * length3);
            int min = Math.min(rint, data.length);
            int i11 = 0;
            int i12 = 0;
            while (i6 < min) {
                i11 += SamplerKt.getAbs(data[i6]);
                i12++;
                i6++;
            }
            bArr[i5] = (byte) (i11 / i12);
            i5 = i10;
            i6 = rint;
        }
        return bArr;
    }
}
