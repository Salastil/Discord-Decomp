package com.discord.security_key;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\r\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\r¨\u0006\u000e"}, d2 = {"Lcom/discord/security_key/WebAuthnDOMException;", "", "<init>", "(Ljava/lang/String;I)V", "AbortError", "ConstraintError", "EncodingError", "InvalidStateError", "NotAllowedError", "NotSupportedError", "SecurityError", "SyntaxError", "TypeError", "UnknownError", "security_key_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class WebAuthnDOMException {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ WebAuthnDOMException[] $VALUES;
    public static final WebAuthnDOMException AbortError = new WebAuthnDOMException("AbortError", 0);
    public static final WebAuthnDOMException ConstraintError = new WebAuthnDOMException("ConstraintError", 1);
    public static final WebAuthnDOMException EncodingError = new WebAuthnDOMException("EncodingError", 2);
    public static final WebAuthnDOMException InvalidStateError = new WebAuthnDOMException("InvalidStateError", 3);
    public static final WebAuthnDOMException NotAllowedError = new WebAuthnDOMException("NotAllowedError", 4);
    public static final WebAuthnDOMException NotSupportedError = new WebAuthnDOMException("NotSupportedError", 5);
    public static final WebAuthnDOMException SecurityError = new WebAuthnDOMException("SecurityError", 6);
    public static final WebAuthnDOMException SyntaxError = new WebAuthnDOMException("SyntaxError", 7);
    public static final WebAuthnDOMException TypeError = new WebAuthnDOMException("TypeError", 8);
    public static final WebAuthnDOMException UnknownError = new WebAuthnDOMException("UnknownError", 9);

    private static final /* synthetic */ WebAuthnDOMException[] $values() {
        return new WebAuthnDOMException[]{AbortError, ConstraintError, EncodingError, InvalidStateError, NotAllowedError, NotSupportedError, SecurityError, SyntaxError, TypeError, UnknownError};
    }

    static {
        WebAuthnDOMException[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private WebAuthnDOMException(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static WebAuthnDOMException valueOf(String str) {
        return (WebAuthnDOMException) Enum.valueOf(WebAuthnDOMException.class, str);
    }

    public static WebAuthnDOMException[] values() {
        return (WebAuthnDOMException[]) $VALUES.clone();
    }
}
