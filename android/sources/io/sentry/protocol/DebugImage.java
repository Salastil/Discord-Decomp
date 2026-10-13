package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Map;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class DebugImage implements y1 {
    public static final String JVM = "jvm";
    public static final String PROGUARD = "proguard";
    private String arch;
    private String codeFile;
    private String codeId;
    private String debugFile;
    private String debugId;
    private String imageAddr;
    private Long imageSize;
    private String type;
    private Map<String, Object> unknown;
    private String uuid;

    public String getArch() {
        return this.arch;
    }

    public String getCodeFile() {
        return this.codeFile;
    }

    public String getCodeId() {
        return this.codeId;
    }

    public String getDebugFile() {
        return this.debugFile;
    }

    public String getDebugId() {
        return this.debugId;
    }

    public String getImageAddr() {
        return this.imageAddr;
    }

    public Long getImageSize() {
        return this.imageSize;
    }

    public String getType() {
        return this.type;
    }

    public Map<String, Object> getUnknown() {
        return this.unknown;
    }

    public String getUuid() {
        return this.uuid;
    }

    @Override // io.sentry.y1
    public void serialize(@NotNull y2 y2Var, @NotNull ILogger iLogger) {
        y2Var.n0();
        if (this.uuid != null) {
            y2Var.C0("uuid").s(this.uuid);
        }
        if (this.type != null) {
            y2Var.C0("type").s(this.type);
        }
        if (this.debugId != null) {
            y2Var.C0("debug_id").s(this.debugId);
        }
        if (this.debugFile != null) {
            y2Var.C0("debug_file").s(this.debugFile);
        }
        if (this.codeId != null) {
            y2Var.C0("code_id").s(this.codeId);
        }
        if (this.codeFile != null) {
            y2Var.C0("code_file").s(this.codeFile);
        }
        if (this.imageAddr != null) {
            y2Var.C0("image_addr").s(this.imageAddr);
        }
        if (this.imageSize != null) {
            y2Var.C0("image_size").a0(this.imageSize);
        }
        if (this.arch != null) {
            y2Var.C0("arch").s(this.arch);
        }
        Map<String, Object> map = this.unknown;
        if (map != null) {
            for (String str : map.keySet()) {
                y2Var.C0(str).o0(iLogger, this.unknown.get(str));
            }
        }
        y2Var.O();
    }

    public void setArch(String str) {
        this.arch = str;
    }

    public void setCodeFile(String str) {
        this.codeFile = str;
    }

    public void setCodeId(String str) {
        this.codeId = str;
    }

    public void setDebugFile(String str) {
        this.debugFile = str;
    }

    public void setDebugId(String str) {
        this.debugId = str;
    }

    public void setImageAddr(String str) {
        this.imageAddr = str;
    }

    public void setImageSize(Long l6) {
        this.imageSize = l6;
    }

    public void setType(String str) {
        this.type = str;
    }

    public void setUnknown(Map<String, Object> map) {
        this.unknown = map;
    }

    public void setUuid(String str) {
        this.uuid = str;
    }

    public void setImageSize(long j) {
        this.imageSize = Long.valueOf(j);
    }
}
