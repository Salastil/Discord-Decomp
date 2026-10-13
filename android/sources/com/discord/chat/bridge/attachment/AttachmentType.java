package com.discord.chat.bridge.attachment;

import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\t\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000b¨\u0006\f"}, d2 = {"Lcom/discord/chat/bridge/attachment/AttachmentType;", "", "indexLabel", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "getIndexLabel", "()Ljava/lang/String;", "Image", "Video", "File", "Audio", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class AttachmentType {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ AttachmentType[] $VALUES;

    @NotNull
    private final String indexLabel;
    public static final AttachmentType Image = new AttachmentType("Image", 0, "imageAttachmentIndex");
    public static final AttachmentType Video = new AttachmentType("Video", 1, "videoAttachmentIndex");
    public static final AttachmentType File = new AttachmentType("File", 2, "fileAttachmentIndex");
    public static final AttachmentType Audio = new AttachmentType("Audio", 3, "audioAttachmentIndex");

    private static final /* synthetic */ AttachmentType[] $values() {
        return new AttachmentType[]{Image, Video, File, Audio};
    }

    static {
        AttachmentType[] $values = $values();
        $VALUES = $values;
        $ENTRIES = b.p($values);
    }

    private AttachmentType(String str, int i5, String str2) {
        this.indexLabel = str2;
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static AttachmentType valueOf(String str) {
        return (AttachmentType) Enum.valueOf(AttachmentType.class, str);
    }

    public static AttachmentType[] values() {
        return (AttachmentType[]) $VALUES.clone();
    }

    @NotNull
    public final String getIndexLabel() {
        return this.indexLabel;
    }
}
