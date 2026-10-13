package com.discord.media.utils;

import android.graphics.Bitmap;
import com.reactnativecommunity.clipboard.ClipboardModule;
import java.io.ByteArrayOutputStream;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0012\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0006\u001a\u00020\u0007*\u00020\b2\u0006\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\u0005J\u001c\u0010\u0006\u001a\u00020\u0007*\u00020\b2\u0006\u0010\f\u001a\u00020\r2\b\b\u0002\u0010\u000b\u001a\u00020\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/discord/media/utils/BitmapUtils;", "", "<init>", "()V", "DEFAULT_QUALITY", "", "toByteArray", "", "Landroid/graphics/Bitmap;", "format", "Landroid/graphics/Bitmap$CompressFormat;", "quality", "mimeType", "", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class BitmapUtils {
    private static final int DEFAULT_QUALITY = 80;

    @NotNull
    public static final BitmapUtils INSTANCE = new BitmapUtils();

    private BitmapUtils() {
    }

    public static /* synthetic */ byte[] toByteArray$default(BitmapUtils bitmapUtils, Bitmap bitmap, Bitmap.CompressFormat compressFormat, int i5, int i6, Object obj) {
        if ((i6 & 2) != 0) {
            i5 = DEFAULT_QUALITY;
        }
        return bitmapUtils.toByteArray(bitmap, compressFormat, i5);
    }

    @NotNull
    public final byte[] toByteArray(@NotNull Bitmap bitmap, @NotNull Bitmap.CompressFormat format, int i5) {
        Intrinsics.checkNotNullParameter(bitmap, "<this>");
        Intrinsics.checkNotNullParameter(format, "format");
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        bitmap.compress(format, i5, byteArrayOutputStream);
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        Intrinsics.checkNotNullExpressionValue(byteArray, "toByteArray(...)");
        return byteArray;
    }

    public static /* synthetic */ byte[] toByteArray$default(BitmapUtils bitmapUtils, Bitmap bitmap, String str, int i5, int i6, Object obj) {
        if ((i6 & 2) != 0) {
            i5 = DEFAULT_QUALITY;
        }
        return bitmapUtils.toByteArray(bitmap, str, i5);
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0034, code lost:
    
        if (r4.equals(com.reactnativecommunity.clipboard.ClipboardModule.MIMETYPE_JPG) != false) goto L21;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x004c, code lost:
    
        return toByteArray(r3, android.graphics.Bitmap.CompressFormat.JPEG, r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x003d, code lost:
    
        if (r4.equals(com.reactnativecommunity.clipboard.ClipboardModule.MIMETYPE_JPEG) == false) goto L19;
     */
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final byte[] toByteArray(@NotNull Bitmap bitmap, @NotNull String mimeType, int i5) {
        Intrinsics.checkNotNullParameter(bitmap, "<this>");
        Intrinsics.checkNotNullParameter(mimeType, "mimeType");
        int hashCode = mimeType.hashCode();
        if (hashCode != -1487394660) {
            if (hashCode != -879264467) {
                if (hashCode == -879258763 && mimeType.equals(ClipboardModule.MIMETYPE_PNG)) {
                    return toByteArray(bitmap, Bitmap.CompressFormat.PNG, i5);
                }
            }
            return toByteArray(bitmap, Bitmap.CompressFormat.PNG, i5);
        }
    }
}
