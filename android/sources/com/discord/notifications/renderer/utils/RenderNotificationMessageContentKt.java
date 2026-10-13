package com.discord.notifications.renderer.utils;

import com.discord.mobile_voice_overlay.views.e;
import java.text.DateFormat;
import java.util.Date;
import kotlin.Metadata;
import kotlin.collections.i;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.MatchGroup;
import kotlin.text.MatchResult;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.text.m;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\u001a\u000e\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0001¨\u0006\u0003"}, d2 = {"renderNotificationMessageContent", "", "content", "notification_renderer_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RenderNotificationMessageContentKt {
    @NotNull
    public static final String renderNotificationMessageContent(@NotNull String content) {
        DateFormat dateTimeInstance;
        String format;
        Intrinsics.checkNotNullParameter(content, "content");
        Regex regex = new Regex("(```(?:([a-z0-9_+\\-.]+?)\\n)?\\n*([^\\n].*?)\\n*```)");
        Regex regex2 = new Regex("((`+)([\\s\\S]*?[^`])\\2(?!`))");
        Regex regex3 = new Regex("<t:(-?\\d{1,17})(?::([tTdDfFsSR]))?>");
        String e9 = regex2.e(regex.e(content, new e(3)), new e(4));
        while (true) {
            m b10 = regex3.b(e9);
            if (b10 == null) {
                return content;
            }
            i iVar = b10.f13584c;
            MatchGroup b11 = iVar.b(1);
            Intrinsics.checkNotNull(b11);
            String str = b11.a;
            MatchGroup b12 = iVar.b(2);
            String str2 = b12 != null ? b12.a : null;
            Date date = new Date(Long.parseLong(str) * 1000);
            if (Intrinsics.areEqual(str2, "R")) {
                format = RelativeTimestampKt.formatRelativeTimestamp(date.getTime());
            } else {
                if (str2 != null) {
                    int hashCode = str2.hashCode();
                    if (hashCode != 68) {
                        if (hashCode != 70) {
                            if (hashCode != 100) {
                                if (hashCode != 102) {
                                    if (hashCode != 83) {
                                        if (hashCode != 84) {
                                            if (hashCode != 115) {
                                                if (hashCode == 116 && str2.equals("t")) {
                                                    dateTimeInstance = DateFormat.getTimeInstance(3);
                                                    format = dateTimeInstance.format(date);
                                                }
                                            } else if (str2.equals("s")) {
                                                dateTimeInstance = DateFormat.getDateTimeInstance(3, 3);
                                                format = dateTimeInstance.format(date);
                                            }
                                        } else if (str2.equals("T")) {
                                            dateTimeInstance = DateFormat.getTimeInstance(2);
                                            format = dateTimeInstance.format(date);
                                        }
                                    } else if (str2.equals("S")) {
                                        dateTimeInstance = DateFormat.getDateTimeInstance(3, 2);
                                        format = dateTimeInstance.format(date);
                                    }
                                } else if (str2.equals("f")) {
                                    dateTimeInstance = DateFormat.getDateTimeInstance(1, 3);
                                    format = dateTimeInstance.format(date);
                                }
                            } else if (str2.equals("d")) {
                                dateTimeInstance = DateFormat.getDateInstance(3);
                                format = dateTimeInstance.format(date);
                            }
                        } else if (str2.equals("F")) {
                            dateTimeInstance = DateFormat.getDateTimeInstance(0, 3);
                            format = dateTimeInstance.format(date);
                        }
                    } else if (str2.equals("D")) {
                        dateTimeInstance = DateFormat.getDateInstance(1);
                        format = dateTimeInstance.format(date);
                    }
                }
                dateTimeInstance = DateFormat.getDateTimeInstance(1, 3);
                format = dateTimeInstance.format(date);
            }
            int i5 = b10.c().f13545d;
            int i6 = b10.c().f13546e + 1;
            Intrinsics.checkNotNull(format);
            content = StringsKt.Q(i5, i6, content, format).toString();
            e9 = StringsKt.Q(b10.c().f13545d, b10.c().f13546e + 1, e9, format).toString();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence renderNotificationMessageContent$lambda$0(MatchResult it) {
        Intrinsics.checkNotNullParameter(it, "it");
        MatchGroup b10 = it.b().b(1);
        Intrinsics.checkNotNull(b10);
        return x.k(b10.a.length(), "X");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final CharSequence renderNotificationMessageContent$lambda$1(MatchResult it) {
        Intrinsics.checkNotNullParameter(it, "it");
        MatchGroup b10 = it.b().b(1);
        Intrinsics.checkNotNull(b10);
        return x.k(b10.a.length(), "X");
    }
}
